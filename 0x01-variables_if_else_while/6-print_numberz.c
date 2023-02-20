#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int number = 48;
	int newLine = '\n';

while (number <= 57)
{
putchar(number);
number++;
}
	putchar(newLine);
	return (0);
}
