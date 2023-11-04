
Function_file =  7-leet.c
Main_file =  7-leetmain.c
NAME = 7-1337
Function_name =  char *leet(char *s);


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
	$(CC)  $(CFLAGS) _putchar.c 2-strlen.c $(OBJ) -o  $(NAME)
	betty $(Function_file)
	./$(NAME)
	$(RM) -rf $(OBJ)   $(NAME)
	



.PHONY: clean oclean fclean re brk  echo

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
	echo  " */ "   >> "$(Function_file)"