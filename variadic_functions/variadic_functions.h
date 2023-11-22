#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>



/**
 *sum_them_all - Algorithms function
 *@n: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 *print_numbers - Algorithms function
 *@n: pointer
 *@separator: pointer
 *
 *Return: 1 or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
