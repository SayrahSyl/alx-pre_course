#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define buff size 1024
#define FAILURE_TO_EXIT 1

void display_prompt1(void);
char *get_current_dir_name(void);
void display_prompt2(void);
int execve(const char *path, char *const argv[], char *const envp[]);
char *read_cli(void);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif
