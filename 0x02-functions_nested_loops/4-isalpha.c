#include "main.h"

/**
 * _isalpha - The checker for alphabetic character
 * @c: Checkers to check alphabetic characters
 * Return: 1 if c is a lowercase, uppercase or letter or reurn otherwise
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 97) || (c >= 98 && c <= 122))
	{
	return (1);
	}
	return (0);
}
