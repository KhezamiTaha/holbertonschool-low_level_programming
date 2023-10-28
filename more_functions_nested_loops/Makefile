
Function_file = 6-print_line.c
Main_file = 6-main.c
NAME = 6-print_line
Function_name =  void print_line(int n);

Header = main.h





CC = gcc
Function_file_final =   '$(Function_file)' | tr -d '0123456789' | tr -d '.c-'  
SRC =    $(Main_file)  $(Function_file)
OBJ = $(SRC:.c=.o)
RM = rm
git = git add * && git commit -m '$(NAME)' && git push
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 
Final_header = \#include \"$(Header)\"



all: $(OBJ)
	$(CC)  $(CFLAGS) _putchar.c $(OBJ) -o  $(NAME)
	./$(NAME)
	$(RM) -rf $(OBJ)   $(NAME)
	



.PHONY: clean oclean fclean re bk  echo

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

bk:
	touch $(SRC) 
	echo "$(Final_header)" >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/**"               >> "$(Function_file)"
	echo    " *"            >> "$(Function_file)"
	echo     $(Function_file_final)            >> "$(Function_file)"
	echo    " - Algorithms function"            >> "$(Function_file)"
	echo  " *@: integer"              >> "$(Function_file)"
	echo  " *"            >> "$(Function_file)"
	echo  " *Return: 1 or 0"             >> "$(Function_file)"
	echo  " */"            >> "$(Function_file)"
	echo  "$(Function_name)"  >> "$(Header)"
	echo      ""            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/*   To-Do :  Variables Description  "   >> "$(Function_file)"
	echo  "              Formt document       */"   >> "$(Function_file)"