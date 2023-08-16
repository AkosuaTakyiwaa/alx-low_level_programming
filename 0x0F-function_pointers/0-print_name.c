#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @f: a pointer to the function print
 * @name: the name to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
