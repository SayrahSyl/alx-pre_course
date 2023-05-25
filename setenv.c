#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * setenv - change or add an environment variable
 * Return:The setenv function returns zero on success,
 * or -1 on error, with errno set to indicate the cause of the error.
 *
 */
int main(void)
{
	const char *name = "susan";
	const char *value = "5";
	int overwrite = "1";

	if (setenv(name, value, overwrite) != 0)
	{
		fprintf(stderr, "Failed to set environment variable.\n");
		return (1);
	}
	return (0);
}
