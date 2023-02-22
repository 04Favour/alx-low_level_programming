#include "main.h"

/**
 * main - main function
 * print_alphabet: functions thatbprints in lower case
 * Return: 0 as always
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
