#include "simple_shell.h"

/**
 * getpid - returns  the process ID (PID) of the calling process.
 * Return: 0 on success
 */
pid_t getpid(void)
{
	pid_t sususay_pid;

	sususay_pid = getpid();
	printf("%u\n", sususay_pid);
	return (0);
}
