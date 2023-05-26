#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "simple_shell.h"

/**
 * convert - this convert a string to an integer
 * @arg: this is the string to convert
 * @val: the pointer to store thr converted value
 *
 * Return: return 1 on success, and 0 on failure
 */

int convert(char *arg, int *val)
{
	int susan = 1;
	char *sarah;
	int m = strtol(arg, &sarah, 10);

	if (!isspace(*sarah) && *sarah != 0)
	{
		susan = 0;
		fprintf(stderr, "%s this is not an integer\n", arg);
		return (0);
	}

	*val = m;
	return (1);
}

/**
 * main - this si the main function
 * @argc: arguments line count
 * @argv: argument array
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int u;

	printf("%d\n", argc - 1);

	if (argc < 5)
	{
		printf(stderr, "Sususay: %s x y\n", argv[0]);
		exit(FAILURE_TO_EXIT);
	}

	for (u = 1; u < argc; u++)
	{
		int val;

		if (convert(argc[u], &val))
		{
			printf("%d\n", val);
		}
	}

	return (0);
}
