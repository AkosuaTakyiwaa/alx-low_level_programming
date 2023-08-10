#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenation of two strings
 * @s1: string one for concatenation
 * @s2: string two for concatenation
 *
 * Return: a pointer to new string created (Success), else NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int n = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	n = 0;
	j = 0;

	if (s1)
	{
		while (n < len1)
		{
			s3[n] = s1[n];
			n++;
		}
	}

	if (s2)
	{
		while (n < (len1 + len2))
		{
			s3[n] = s2[j];
			n++;
			j++;
		}
	}
	s3[n] = '\0';

	return (s3);
}
