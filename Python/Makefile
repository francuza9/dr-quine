# ANSI escape codes for colors
RED = \033[0;31m
WHITE = \033[0;32m
BLUE = \033[0;34m
WHITE = \033[1;37m
NO_COLOR = \033[0m

EXEC1 = Colleen.py
EXEC2 = Grace.py
EXEC3 = Sully.py

all: colleen grace sully
	@echo "$(WHITE)All Python scripts are run!$(NO_COLOR)"

colleen: $(EXEC1)
	@echo "$(WHITE)Running Colleen...$(NO_COLOR)"
	python3 $(EXEC1) > tmp_Colleen
	diff tmp_Colleen $(EXEC1)
	@echo "$(WHITE)Colleen executed successfully!$(NO_COLOR)"

grace: $(EXEC2)
	@echo "$(WHITE)Running Grace...$(NO_COLOR)"
	python3 $(EXEC2)
	diff $(EXEC2) Grace_kid.py
	@echo "$(WHITE)Grace executed successfully!$(NO_COLOR)"

sully: $(EXEC3)
	@echo "$(WHITE)Running Sully...$(NO_COLOR)"
	python3 $(EXEC3)
	- diff $(EXEC3) Sully_4.py
	- diff $(EXEC3) Sully_3.py
	- diff $(EXEC3) Sully_2.py
	- diff $(EXEC3) Sully_1.py
	- diff $(EXEC3) Sully_0.py
	@echo "$(WHITE)Sully executed successfully!$(NO_COLOR)"

clean:
	@echo "$(RED)Cleaning up temporary files...$(NO_COLOR)"
	rm -f tmp_Colleen Grace_kid.c Sully_*
	@echo "$(WHITE)Clean complete!$(NO_COLOR)"

fclean: clean
	@echo "$(RED)Removing any generated files...$(NO_COLOR)"
	rm -rf Grace_kid.py Sully_*
	@echo "$(WHITE)Full clean complete!$(NO_COLOR)"

re: fclean all
	@echo "$(WHITE)Rebuild complete!$(NO_COLOR)"

.PHONY: all colleen grace sully clean fclean re
