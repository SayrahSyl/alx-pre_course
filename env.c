#include <stdio.h>
#include <stdlib.h>

extern char **environ;

/**
 * print_environment - Display the current environment variables.
 */
void print_environment(void)
{
    char **env = environ;

    while (*env != NULL)
    {
        printf("%s\n", *env);
        env++;
    }
}

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
    print_environment();
    return 0;
}
