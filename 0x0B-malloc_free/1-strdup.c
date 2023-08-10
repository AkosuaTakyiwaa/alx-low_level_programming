#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - to copy string given as a parameter
 * @str: string for duplication
 *
 * Return: pointer to copied string (Success),else NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int n, len;

	n = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[n] = str[n]) != '\0')
		n++;

	return (dup);
}
