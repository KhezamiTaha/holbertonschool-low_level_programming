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


/**
 *array_iterator - Write a function that executes a function given as a
 *parameter on each element of an array.
 *@array: pointer
 *@size: pointer
 *@action: pointer
 *Return: 1 or 0
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 *int_index. - Algorithms function
 *@array: pointer
 *@size: pointer
 *@cmp: pointer
 *Return: 1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif
