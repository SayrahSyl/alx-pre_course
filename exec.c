#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include "simple_shell.h"

/**
 * execve - changes the process image to a new process image
 * @ret: integer variable to store return value of the 'execve' function
 * @cli: array of strings representing the command and its arguments
 * @env: array of strings representing the environment variables
 * Return: -1 if it returns to the calling process image,
 * and errno shall be set to indicate error
 */

int main()
{
	int ret;
	char *cli[] = {"ls", "-l", "/usr/", NULL};
	char *env[] = {"HOME=/usr/home", "sususay=home", NULL};

	printf("Before execve\n");
	ret = execve("/bin/ls", cli, env);

	if (ret == -1)
	{       
		perror("Error:");
	}

	printf("After execve\n");

	return 0;
}
