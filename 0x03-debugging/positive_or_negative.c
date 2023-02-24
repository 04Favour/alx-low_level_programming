#include "main.h"

/**
 * positive_or_negative - checks for positive or negative numbers
 * Return: 0
 * @i: the number to be checked
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is a negative number\n", i);
	else
		printf("%d is positive\n", i);

}
