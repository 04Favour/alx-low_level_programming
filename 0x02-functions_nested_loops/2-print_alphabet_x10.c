#include "main.h"

/**
 * main - main function
 * 2-print_alphabet_x10.c - function that prints 10x alphabet
 * return: is always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}

}
