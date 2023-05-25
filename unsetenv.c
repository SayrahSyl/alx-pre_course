#include <stdlib.h>
#include <stdio.h>

/**
 * _unsetenv - deletes the variable name from the environ.
 * @name: name of variable
 * Return: Zero on success,
 * or -1 on error, with errno set to indicate the cause of the error.
 */
int _unsetenv(const char *name)
{
	const char *name = "susan";

	if (unsetenv(susan) != 0)
	{
		fprintf(stderr, "Failed to unset environment variable.\n");
	return (1);
	}
	return (0);
}
