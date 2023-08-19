#include "variadic_functions.h"
/**
 * print_all - a function that  prints anything
 * @format: a list of types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *man = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", man, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", man, va_arg(list, int)
					break;
				case 'f':
					printf("%s%f", man, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", man, str);
					break;
				default:
					i++;
					continue;
			}
			man = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
