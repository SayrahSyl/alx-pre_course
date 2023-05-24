#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "simple_shell.h"

/**
 * main - this is the main function
 *
 * Return: on SUCCESS exit
 */

int main(void)
{
	char *cli;

	do {
		display_prompt1();
		cli = read_cli();
		if (!cli)
		{
			exit(EXIT_SUCCESS);
		}
		if (cli[0] == '\0' || strcmp(cli, "\n") == 0)
		{
			free(cli);
			continue;
		}
		if (strcmp(cli, "exit\n") == 0)
		{
			free(cli);
			break;
		}
		printf("%s\n", cli);
		free(cli);
	}

	while (1);

	exit(EXIT_SUCCESS);
}

/**
 * read_cli -  Read the file descriptor command
 * Return: on success the number of bytes is returned
 * On error return -1 and errno is set appropriately
 */
	char *read_cli(void)
{
	char sarah[1024];
	char *pointer = NULL;
	char ptrlen = 0;

	while (fgets(sarah, 1024, stdin))
	{
		int sarahlen = strlen(sarah);

		if (!pointer)
		{
			pointer = malloc(sarahlen + 1);
		}
		else
		{
			char *pointer2 = realloc(pointer, ptrlen + sarahlen + 1);

			if (pointer2)
			{
				pointer = pointer2;
			}
			else
			{
				free(pointer);
				pointer = NULL;
			}
		}

		if (!pointer)
		{
			fprintf(stderr, "error: failed to alloc memory: %s\n",
					strerror(errno));
			return (NULL);
		}

		strcpy(pointer + ptrlen, sarah);

		if (sarah[sarahlen - 1] == '\n')
		{
			if (sarahlen == 1 || sarah[sarahlen - 2] != '\\')
			{
				return (pointer);
			}

			pointer[ptrlen + sarahlen - 2] = '\0';
			sarahlen -= 2;
			display_prompt2();
		}

		ptrlen += sarahlen;
	}

	return (pointer);
}
