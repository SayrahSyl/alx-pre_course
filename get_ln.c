#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * main - main function
 * getline: delimited string input
 * Return: on sucess the number of char and bytes read are return
 * on failure -1 is returned
 */

int main(void)
{
	char *sarah = NULL;
	size_t bytes = 17;
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
