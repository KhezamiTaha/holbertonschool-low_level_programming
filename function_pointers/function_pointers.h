#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 *print_name - function that prints a name.
 *@name: pointer
 *@f: pointer
 *
 *Return: 1 or 0
 */
void print_name(char *name, void (*f)(char *));
#endif
