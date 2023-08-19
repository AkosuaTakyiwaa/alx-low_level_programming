nclude "variadic_functions.h"

/**
 * sum_them_all - a function that calculate sum of all its parameters
 * @n: the number of arguments that is passed to function
 *
 * Return: sum produced
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int y;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
