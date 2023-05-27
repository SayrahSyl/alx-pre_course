#include "simple_shell.h"

/**
 * fork - create a child process
 * getpid - get process identification
 *
 * Return: on success return 0, on failure return -1
 */

pid_t fork(void)
{
	pid_t sususay_pid;
	pid_t pid;

	printf("Before susan\n");
	pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return (1);
	}
	else if (pid == 0)
	{
		sususay_pid = getpid();
		printf("This is the child process. PID: %d\n", sususay_pid);

		sleep(3);

		printf("Child process completed.\n");
		return (0);
	}
	else
	{
		printf("This is the parent process. Child PID: %d\n", pid);

		printf("Parent process completed.\n");
		return (0);
	}

	return (0);
}
