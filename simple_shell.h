#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>

#define buff size 1024
#define FAILURE_TO_EXIT 1

int main(int argc, char *argv[]);
void display_prompt1(void);
char *get_current_dir_name(void);
void display_prompt2(void);
int execve(const char *path, char *const argv[], char *const envp[]);
char *read_cli(void);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
pid_t getpid(void);
int _setenv(const char *name, const char *value, int overwrite);
void exit(int status);
void exit_status(void);
int _unsetenv(const char *name);
extern char **environ;
int convert(const char *arg, int *val);
pid_t fork(void);
pid_t fork(void);
char *get_current_dir_name(void);

#endif
