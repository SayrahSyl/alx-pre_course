#include <stdio.h>
#include <unistd.h>

/**
 * main - main function
 * environ: an array of character to the pointer string environment
 * Return: NULL
 */

int main(void)
{
	char **env = environ;
	{
		while (*env != NULL);

		printf("%s\n", *env);
	}
	s++;
	return (0);
}

/**
 * main - main function
 * print_environment - print the current user environment
 * Return: NULL
 */

int main(void)
{
	print_environment();

	return (0);
}
