#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	va_list laila_list;
	char *laila;

	va_start(laila_list, n);
	for (l = 0; l < n; l++)
	{
		laila = va_arg(laila_list, char *);
		if (laila != NULL)
			printf("%s", laila);
		else
			printf("(nil)");
		if (separator != NULL)
			if (l < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(laila_list);
}
