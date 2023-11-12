
Function_file =   4-free_grid.c
Main_file =   4-free_gridmain.c
NAME = 4-free_grid
Function_name =  void free_grid(int **grid, int height);


Header = main.h





CC = gcc
Function_file_final =   '$(Function_file)' | tr -d '0123456789' | tr '-' '_' 
SRC =    $(Main_file)  $(Function_file)
OBJ = $(SRC:.c=.o)
RM = rm
git = git add * && git commit -m '$(NAME)' && git push
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89  
Final_header = \#include \"$(Header)\"



all: $(OBJ)
	$(CC)  $(CFLAGS) _putchar.c 3-alloc_grid.c  $(OBJ) -o  $(NAME)
	betty $(Function_file)
	./$(NAME)
	$(RM) -rf $(OBJ)
	



.PHONY: clean oclean fclean re brk  echo valgrind

clean:
	$(RM) -rf *~  $(NAME)

oclean:
	$(RM) -rf $(OBJ)

fclean:
	$(RM) -rf *~  $(NAME)
	$(RM) -rf $(OBJ)
	rm $(SRC)
re: oclean  all

git:
	$(git)

echo:
	
	echo  $(NAME)

valgrind:
	valgrind ./$(NAME)

brk:
	touch $(SRC) 
	echo "$(Final_header)" >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/**"               >> "$(Function_file)"
	echo    " *"            >> "$(Function_file)"
	echo     $(Function_file_final)            >> "$(Function_file)"
	echo    " - Algorithms function"            >> "$(Function_file)"
	echo  " *@: pointer"              >> "$(Function_file)"
	echo  " *@: pointer"              >> "$(Function_file)"
	echo  " *"            >> "$(Function_file)"
	echo  " *Return: 1 or 0"             >> "$(Function_file)"
	echo  " */"            >> "$(Function_file)"
	echo  "$(Function_name)"  >> "$(Header)"
	echo      ""            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/**"   >> "$(Function_file)"
	echo  " * To-Do :  Variables Description"   >> "$(Function_file)"
	echo  " *          Formt document"   >> "$(Function_file)"
	echo  " */"   >> "$(Function_file)"