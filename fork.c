#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include "simple_shell.h"

/**
 * fork - create a child process
 * @getpid:get process identification
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
                perror("Error:");
                return (1);
        }
        printf("After susan\n");
        sususay_pid = getpid();
        printf("sususay pid is %u\n", sususay_pid);
        return (0);
}
