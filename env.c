#include <stdio.h>
#include <stdlib.h>

extern char **environ;

/**
 * main - Entry point of the program
 * environ - variable of an array strings
 *
 * Return: 0 on success
 */

int main(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}

	return (0);
}
