#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - Demonstrates forking a child process and waiting for it to complete.
 *
 * Return: Always 0.
 */
int main(void)
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
}
