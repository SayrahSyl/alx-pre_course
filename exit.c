#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "simple_shell.h"

/**
 * main - main function
 * @status: is an integer used to exit the shell
 * Return: void
 */

void exit(int status);
{
	int main(void);
	char cli[76]
		while (1)
			printf("Enter command here: ");
	fgets(cli, sizeof(cli), stdin);
	cli[strcspn(cli, "\n")] = '\0';

	if
		(strcmp(cli, "exit") == 0)
	{
		exit_status();
	}
