#include "main.h"

/**
 * Print_last_digit - Print the last digit of a number
 * @r: The digit to be treated
 * Return: The value of the last digit
 */

int print_last_digit(int n)

{

	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
