#include "variadic_functions.h"

/**
 * print_strings - p function which rints strings
 * @separator: the separator between strings
 * @n: the number of arguments to be printed
 * print nil if one string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
		unsigned int y;
		char *str;

		va_list list;

		va_start(list, n);

		for (y = 0; y < n; y++)
		{
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			if (!separator)
				printf("%s", str);
			else if (separator && y == 0)
				printf("%s", str);
			else
				printf("%s%s", separator, str);
		}

		printf("\n");

		va_end(list);
}
