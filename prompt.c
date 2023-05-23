#include <stdio.h>
#include "simple_shell.h"

/**
 * display_prompt1 - this function prompt user for input
 * Return: void
 */

void display_prompt1(void)
{
	fprintf(stderr, "sususay $ ");
}

/**
 * display_prompt2 - this function is displayed when a user enters a multi-line
 * Return: void
 */

void display_prompt2(void)
{
	fprintf(stderr, "> ");
}
