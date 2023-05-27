#include "simple_shell.h"

/**
 * _unsetenv - deletes the variable name from the environ.
 * @name: name of variable
 * Return: Zero on success,
 * or -1 on error, with errno set to indicate the cause of the error.
 */
int _unsetenv(const char *name)
{
	int argc, char *argv[]
	{
		if (argc != 2)
		{
			fprintf(stderr, "Usage: %s VARIABLE\n", argv[0]);
			return (1);
		}
		if (unsetenv(argv[1]) != 0)
		{
			fprintf(stderr, "Failed to unset environ variable: %s\n", argv[1]);
			return (1);
		}

		return (0);
}
