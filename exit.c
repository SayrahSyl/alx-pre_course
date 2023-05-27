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

/**
 * exit - terminates the calling process immediately
 * @status: this is returned to the parent process as the
 * process's exit status
 *
 * Return: exit value of the last command executed or
 * 0 if no command was executed
 */

void exit(int status)
{
	char cli[76];

	{
		exit_status();
		exit(status);
	}

	while (1)
	{
		printf("Do you want to exit? (y/n): ");
		fgets(cli, sizeof(cli), stdin);

		if (cli[0] == 'y' || cli[0] == 'Y')
		{
			exit(0);
		}
	}
}
