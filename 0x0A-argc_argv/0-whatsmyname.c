#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: a number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
