#include "simple_shell.h"

/**
 * execve - the function shall replace the current process image with
 * a new process image
 * @path: path of the executable file
 * @argv:array of character pointer
 * @envp: environment pointer
 *
 * Return: -1 if it returns to the calling process image,
 * and errno shall be set to indicate error
 */

int execve(const char *path, char *const argv[], char *const envp[])
{
	path = void;
	argv[] = void;
	envp[] = void;

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
