#include <stdlib.h>
#include <stdio.h>

/**
 * _setenv - change or add an environment variable
 * @name: a string that represents the name of the
 * environ variable you want to set or modify.
 * @value:the value assigned to the environ variable.
 * @overwrite: specifies whether the function
 * should overwrite the value of an existing environ variable
 * Return:The setenv function returns zero on success,
 * or -1 on error, with errno set to indicate the cause of the error.
 *
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	const char *name = "susan";
	const char *value = "5";
	int overwrite = 1;

	if (setenv(name, value, overwrite) != 0)
	{
		fprintf(stderr, "Failed to set environment variable.\n");
		return (1);
	}
	return (0);
}
