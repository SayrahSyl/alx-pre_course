#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "simple_shell.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: numer of argument count
 * @argv: arrayof arguments
 *
 * Return: always 0 (success)
 */

int convert(char *arg, int *val)
{
	int result = 1;
	char *chk;
	int x = strtol( arg, &chk, 10 );
	if ( !isspace( *chk ) && *chk != 0 )
	{
		result = 0;
		fprintf( stderr, "%s this is not an integer!\n", arg );
		return 0;
	}
	*val = x;
	return 1;
}
	if ( argc < 3 )
	{
		fprintf( stderr, "USAGE: %s x y\n", argv[0] );
		exit( 0 );
	}
	
	int x, y;
	if ( convert( argv[1], &x) && convert( argv[2], &y ))
	{
		printf( "%d\n", x + y );
	}
	return 0;
}
