#include <stdlib.h>
#include <stdio.h>
#include "simple_shell.h"

/**
 * exit_status - this is the outcome or result of the execution
 *
 * Return: exit value of the last command executed or
 * 0 if no command was executed
 */

void exit_status(void)
{
	printf("Exiting...\n");
}

void exit(int status)
{
	char cli[76];

	while (1)
	{
		printf("Do you want to exit? (y/n): ");
		fgets(cli, sizeof(cli), stdin);

		if (cli[0] == 'y' || cli[0] == 'Y')
		{
			exit_status();
			exit(status);
		}

	
		
	}
}
/**
 * main - this is the main function
 * exit - calls the shell to exit
 *
 * Return: void
 */
int main(void)
{
	exit(0);

	return (0);
}
