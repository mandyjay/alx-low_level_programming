#include <stdio.h>
/**
 * main - A program that prints the size of computer typess
 * Return 0 (Success)
 */

int main(void)
	char j;
	int u;
	long int d;
	long long int e;
	float f;
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(u));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
