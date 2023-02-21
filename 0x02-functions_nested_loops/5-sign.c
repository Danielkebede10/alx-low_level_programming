#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number is to be checked
 * Return: 1 for positve num, -1 for negative num, or zero for anythinf else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return(1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return(-1);
	}
	else
	{
	_putchar(48);
	return(0);
	}
}
