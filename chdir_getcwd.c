#include "simple_shell.h"

/**
 * main - main function
 * chdir - changes the current working directory
 * cd - command is used to change the current working directory.
 * @argc: counts number of argument passed
 * @argv: argument array
 * Return: On success, zero is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	char *home_dir_sususay = getenv("HOME");
	char *prev_dir_sususay = getenv("PWD");
	char *new_dir_sususay;

	if (argc == 1)
	{
	new_dir_sususay = home_dir_sususay;
	}
	else
		(argc == 2);
	{
		if (strcmp(argv[1], "cd -") == 0)
		{
			new_dir_sususay = prev_dir_sususay;
		}
		else
		{
			new_dir_sususay = argv[1];
		}
	}
	else
	{
		fprintf(stderr, "Usage: cd [DIRECTORY]\n");
		return (1);
	}
	if (chdir(new_dir_sususay) != 0)
	{
		perror("cd");
		return (1);
	}

	return (0);
}

/**
 * getcwd, get_current_dir_name - get current working directory
 *
 * Return: on success return a pointer to a string containing
 * the pathname of the current working directory.
 * On failure, return NULL, and errno is set to indicate the error.
 */

char *get_current_dir_name(void)
{
	char cwd[PATH_MAX];

	if (getcwd(cwd, sizeof(cwd)) == NULL)
	{
		perror("getcwd");
		return (1);
	}
	if (setenv("PWD", cwd, 1) != 0)
	{
		perror("setenv");
		return NULL;
	}
	return (0);
}
