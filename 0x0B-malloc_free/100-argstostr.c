#include <stdlib.h>
#include "main.h"
/**
  *argstostr - fxn to concatenate arguments of the program.
  *@av: the pointer to array of size ac.
  *@ac: an argument count.
  *Return:  Pointer to new string,NULL if ac == 0 or av == null.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int n, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
		{
			size++;
			j++;
		}
		size++;
		n++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
		{
			arg[k] = av[n][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		n++;
	}
	arg[k] = '\0';
	return (arg);
}
