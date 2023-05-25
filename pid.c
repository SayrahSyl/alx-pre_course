#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "simple_shell.h"

/**
 * main - this is the function that prints the process ID
 *
 * Return: prints 0 at success
 */

int main(void)
{
	pid_t sususay_pid;

	sususay_pid = getpid();
	printf("%u\n", sususay_pid);
	return (0);
}
