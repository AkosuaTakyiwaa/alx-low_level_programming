#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - fxn that concatenates n bytes of a string to another string
 * @s1: the fisrt string- to append to
 * @s2: the second string- to concatenate from
 * @n: nom. of bytes from s2 to concatenate to s1
 *
 * Return: a pointer to the string produced
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int y = 0, r = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (y < len1)
	{
		s[y] = s1[y];
		y++;
	}

	while (n < len2 && y < (len1 + n))
		s[y++] = s2[r++];

	while (n >= len2 && y < (len1 + len2))
		s[y++] = s2[r++];

	s[y] = '\0';

	return (s);
}
