

Function_file = 1-isdigit.c
Main_file = 1-main.c

Function_name =  int _isdigit(int c);
Header = main.h




CC = gcc
NAME = echo $(Function_file) | tr -d '.c'
string= echo $(Function_file) | tr -d '1' | tr -d '.c' |tr '-' '_'
SRC =    $(Main_file)  $(Function_file)
OBJ = $(SRC:.c=.o)
RM = rm
git = git add * && git commit -m '$(NAME)' && git push
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
Final_header = \#include \"$(Header)\"



all: $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)
	./$(NAME)
	$(RM) -rf $(OBJ)  $(NAME)
	



.PHONY: clean oclean fclean re bk dels echo

clean:
	$(RM) -rf *~ $(NAME)

oclean:
	$(RM) -rf $(OBJ)

fclean:
	$(RM) -rf *~ $(NAME)
	$(RM) -rf $(OBJ)
re: oclean dels all

git:
	$(git)

echo:
	echo $(string)

bk:
	touch $(SRC)
	echo "$(Final_header)" >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/**"               >> "$(Function_file)"
	echo  " *$(string) - Algorithms function"               >> "$(Function_file)"
	echo  " *@: integer"              >> "$(Function_file)"
	echo  " *"            >> "$(Function_file)"
	echo  " *Return: 1 or 0"             >> "$(Function_file)"
	echo  " */"            >> "$(Function_file)"
	echo  "$(Function_name)"  >> "$(Header)"
dels :
	rm $(SRC)