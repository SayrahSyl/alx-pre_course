#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _unsetenv - deletes the variable name from the environ.
 * @name: name of variable
 * Return: Zero on success,
 * or -1 on error, with errno set to indicate the cause of the error.
 */
int _unsetenv(const char *name)
{
	if (name == NULL)
		return (-1);

	return unsetenv(name);
}
