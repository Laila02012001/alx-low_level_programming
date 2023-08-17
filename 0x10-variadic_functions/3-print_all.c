#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int l = 0;
	char *lai, *la = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[l])
		{
			switch (format[l])
			{
				case 'c':
					printf("%s%c", la, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", la, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", la, va_arg(list, double));
					break;
				case 's':
					lai = va_arg(list, char *);
					if (!lai)
						lai = "(nil)";
					printf("%s%s", la, lai);
					break;
				default:
					l++;
					continue;
			}
			la = ", ";
			l++;
		}
	}

	printf("\n");
	va_end(list);
}
