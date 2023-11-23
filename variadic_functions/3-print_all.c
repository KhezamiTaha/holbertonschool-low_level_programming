#include "variadic_functions.h"

void print_float(va_list *list);
void print_int(va_list *list);
void print_char(va_list *list);
void print_string(va_list *list);

/**
 *print_all - Algorithms function
 *@format: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_all(const char *const format, ...)
{
	unsigned int long i, j;
	type_t array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};
	va_list printff;
	va_list *ptr = &printff;
	void (*fptr)(va_list *);
	char *betzeen = "";

	i = 0;
	va_start(printff, format);
	while (format && (format + i))
	{
		j = 0;
		while (array[j].type)
		{
			if (*(format + i) == *(array[j].type))
			{
				printf("%s", betzeen);
				fptr = array[j].f;
				fptr(ptr);
				betzeen = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(printff);
	printf("\n");
}

/**
 *print_char - Algorithms function
 *@list: va_list pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_char(va_list *list)
{
	printf("%c", va_arg(*list, int));
}

/**
 *print_int - Algorithms function
 *@list: va_list pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_int(va_list *list)
{
	printf("%d", va_arg(*list, int));
}

/**
 *print_float - Algorithms function
 *@list: va_list pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_float(va_list *list)
{
	printf("%f", va_arg(*list, double));
}

/**
 *print_string - Algorithms function
 *@list: va_list pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_string(va_list *list)
{
	char *str = va_arg(*list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * To-Do :  Variables Description
 *          Formt document
 */
