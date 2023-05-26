#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "simple_shell.h"

/**
 * getline - delimited string input
 * @lineptr: A pointer to a pointer that will store the address
 * of the buffer where the line is read into
 * @n: A pointer to a variable of type size_t that holds
 * the size of the buffer pointed to by lineptr
 * @stream: A pointer to the FILE structure from which the line will be read
 * Return: on sucess the number of char and bytes read are return
 * on failure -1 is returned
 */
ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
	char *sarah = NULL;
	size_t bytes = 1024;
	ssize_t bytes_rd = 0;

	sarah = malloc(sizeof(char) * bytes);
	if (sarah == NULL)
{
	printf("failed, no memory allocated\n");
	return (0);
}
	printf("sususay $:");
	bytes_rd = getline(&sarah, &bytes, stdin);

	printf("The string entered is: %s", sarah);
	printf("The numb of bytes read is: %ld\n", (long int)bytes_rd);

	free(sarah);
	return (0);
}
