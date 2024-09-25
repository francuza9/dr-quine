CC = clang
CFLAGS = -Wall -Wextra -Werror

EXEC1 = Colleen
EXEC2 = Grace
EXEC3 = Sully

SRC1 = Colleen.c
SRC2 = Grace.c
SRC3 = Sully.c

OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
WHITE = \033[1;37m
NO_COLOR = \033[0m

all: $(EXEC1) $(EXEC2) $(EXEC3)
	@echo "$(WHITE)All executables built successfully!$(NO_COLOR)"

$(EXEC1): $(OBJ1)
	@echo "$(WHITE)Building Colleen...$(NO_COLOR)"
	$(CC) $(CFLAGS) -o $(EXEC1) $(OBJ1)
	@echo "$(WHITE)Colleen built!$(NO_COLOR)"

$(EXEC2): $(OBJ2)
	@echo "$(WHITE)Building Grace...$(NO_COLOR)"
	$(CC) $(CFLAGS) -o $(EXEC2) $(OBJ2)
	@echo "$(WHITE)Grace built!$(NO_COLOR)"

$(EXEC3): $(OBJ3)
	@echo "$(WHITE)Building Sully...$(NO_COLOR)"
	$(CC) $(CFLAGS) -o $(EXEC3) $(OBJ3)
	@echo "$(WHITE)Sully built!$(NO_COLOR)"

colleen: $(EXEC1)
	@echo "$(WHITE)Running Colleen...$(NO_COLOR)"
	./$(EXEC1) > tmp_Colleen
	@echo "$(RED)Comparing Colleen output...$(NO_COLOR)"
	diff tmp_Colleen $(SRC1)
	@echo "$(WHITE)Colleen executed and verified successfully!$(NO_COLOR)"

grace: $(EXEC2)
	@echo "$(WHITE)Running Grace...$(NO_COLOR)"
	./$(EXEC2)
	@echo "$(RED)Comparing Grace output...$(NO_COLOR)"
	diff $(SRC2) Grace_kid.c
	@echo "$(WHITE)Grace executed and verified successfully!$(NO_COLOR)"

sully: $(EXEC3)
	@echo "$(WHITE)Running Sully...$(NO_COLOR)"
	./$(EXEC3)
	@echo "$(RED)Comparing Sully output...$(NO_COLOR)"
	- diff $(SRC3) Sully_5.c
	- diff $(SRC3) Sully_4.c
	- diff $(SRC3) Sully_3.c
	- diff $(SRC3) Sully_2.c
	- diff $(SRC3) Sully_1.c
	- diff $(SRC3) Sully_0.c
	@echo "$(WHITE)Sully executed and verified!$(NO_COLOR)"

clean:
	@echo "$(RED)Cleaning up object files and temporary files...$(NO_COLOR)"
	rm -f $(OBJ1) $(OBJ2) $(OBJ3) tmp_Colleen Grace_kid.c Sully_*
	@echo "$(WHITE)Clean complete!$(NO_COLOR)"

fclean: clean
	@echo "$(RED)Removing executables...$(NO_COLOR)"
	rm -f $(EXEC1) $(EXEC2) $(EXEC3)
	@echo "$(WHITE)Full clean complete!$(NO_COLOR)"

re: fclean all
	@echo "$(WHITE)Rebuild complete!$(NO_COLOR)"


.PHONY: all clean fclean re colleen grace
