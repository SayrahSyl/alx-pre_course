#include "simple_shell.h"

/**
 * convert - this convert a string to an integer
 * @arg: this is the string to convert
 * @val: the pointer to store thr converted value
 *
 * Return: return 1 on success, and 0 on failure
 */
int convert(const char *arg, int *val)
{
	char *endptr;
	long num;

	num = strtol(arg, &endptr, 10);
	if (*endptr != '\0')
	{
		return (0);
	}
	if (num < INT_MIN || num > INT_MAX)
	{
		return (0);
	}
	*val = (int)num;
	return (1);
}

/**
 * main - program entry
 * @argc: argument count
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int u;

	printf("%d\n", argc - 1);

	if (argc < 5)
	{
		fprintf(stderr, "Sususay: %s x y\n", argv[0]);
		return (1);
	}

	for (u = 1; u < argc; u++)
	{
		int val;

		if (convert(argv[u], &val))
		{
			printf("%d\n", val);
		}
	}
		else
		{
			fprintf(stderr, "Failed to convert: %s\n", argv[u]);
			return (1);
		}
		return (0);
}
