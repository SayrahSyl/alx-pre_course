#include "simple_shell.h"

extern char **environ;

/**
 * main - this is the main function
 * environ - array of character pointers to the environment strings
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
