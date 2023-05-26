#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * fork - create a child process
 * wait — await process completion
 * Return: On  success,  the  PID of the child process
 * is returned in the parent,
 * and 0 is returned in the child.
 * On failure, -1 is returned in the parent, no child process is created,
 * and errno is set appropriately.
 */

pid_t fork(void)
wait [pid...]
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		return (1);
	}

	if (child_pid == 0)
	{

		printf("Wait for me, wait for me\n");
		sleep(3);
		_exit(0);
	}
	else
	{

		if (wait(&status) == -1)
		{
			perror("wait");
			return (1);
		}
		printf("Oh, it's all better now\n");
	}

	return (0);
