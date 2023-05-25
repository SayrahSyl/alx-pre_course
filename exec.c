#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include "simple_shell.h"

/**
 * main - this is the function of the process image
 *
 * Return: -1 if it returns to the calling process image,
 * and errno shall be set to indicate error
 */

int main(void)
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

	return (0);
}
