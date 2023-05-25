#include <stdio.h>
#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: numer of argument count
 * @argv: arrayof arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int s;
	(void)argc;

	printf("%d\n", argc - 1);

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
