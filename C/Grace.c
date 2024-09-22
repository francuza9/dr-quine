#include <stdio.h>
#define FILENAME "Grace_kid.c"
// Comment
#define CODE "#include <stdio.h>%c#define FILENAME %cGrace_kid.c%c%c// Comment%c#define CODE %c%s%c%c#define MAIN() int main(){FILE*fp=fopen(FILENAME, %cw%c);fprintf(fp,CODE,10,34,34,10,10,34,CODE,34,10,34,34,10); fclose(fp); return 0;}%cMAIN()"
#define MAIN() int main(){FILE*fp=fopen(FILENAME, "w");fprintf(fp,CODE,10,34,34,10,10,34,CODE,34,10,34,34,10); fclose(fp); return 0;}
MAIN()