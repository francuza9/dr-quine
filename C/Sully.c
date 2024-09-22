#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define FILENAME "Sully_%d.c"
#define EXEC_NAME "Sully_%d"
int main() {
int i = 5;if(i<=0)return 0;
char filename[50],exec_name[50];
snprintf(filename, sizeof(filename), FILENAME, i-1);
snprintf(exec_name, sizeof(exec_name), EXEC_NAME, i-1);
FILE *fp=fopen(filename, "w");if(fp == NULL)return 1;
char *code = "#include<stdio.h>%c#include<stdlib.h>%c#include<unistd.h>%c#define FILENAME %cSully_%%d.c%c%c#define EXEC_NAME %cSully_%%d%c%cint main() {%cint i = %d;if(i<=0)return 0;%cchar filename[50],exec_name[50];%csnprintf(filename, sizeof(filename), FILENAME, i-1);%csnprintf(exec_name, sizeof(exec_name), EXEC_NAME, i-1);%cFILE *fp=fopen(filename, %cw%c);if(fp == NULL)return 1;%cchar *code = %c%s%c;%cfprintf(fp,code,10,10,10,34,34,10,34,34,10,10,i-1,10,10,10,10,34,34,10,34,code,34,10,10,10,10,34,34,10,10,10,34,34,10,10);%cfclose(fp);%cchar compile_cmd[100];%csnprintf(compile_cmd, sizeof(compile_cmd), %cclang -Wall -Wextra -Werror %%s -o %%s%c, filename, exec_name);%csystem(compile_cmd);%cchar run_cmd[50];%csnprintf(run_cmd, sizeof(run_cmd), %c./%%s%c, exec_name);%cif (i > 1) system(run_cmd);%creturn 0;}";
fprintf(fp,code,10,10,10,34,34,10,34,34,10,10,i-1,10,10,10,10,34,34,10,34,code,34,10,10,10,10,34,34,10,10,10,34,34,10,10);
fclose(fp);
char compile_cmd[100];
snprintf(compile_cmd, sizeof(compile_cmd), "clang -Wall -Wextra -Werror %s -o %s", filename, exec_name);
system(compile_cmd);
char run_cmd[50];
snprintf(run_cmd, sizeof(run_cmd), "./%s", exec_name);
if (i > 1) system(run_cmd);
return 0;}