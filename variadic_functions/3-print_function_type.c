#include "variadic_functions.h"
void print_char(va_list *list)
{
	printf("%c", va_arg(*list, char ));
}

void print_int(va_list *list)
{
	printf("%d", va_arg(*list, int));
}

void print_float(va_list *list)
{
	printf("%f", va_arg(*list, float));
}

void print_string(va_list *list)
{
	char *str = va_arg(*list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);	
}