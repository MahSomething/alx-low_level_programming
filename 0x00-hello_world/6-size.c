#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = sizeof(int);
int b = sizeof(char);
int c = sizeof(long int);
int d = sizeof(long long int);
int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", b);
	printf("Size of an int: %d byte(s)\n", a);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", e);
return (0);
}
