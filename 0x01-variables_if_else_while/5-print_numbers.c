#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;
	char newLine = '\n';

while (number < 10)
{
printf("%d", number);
number++;
}
	putchar(newLine);
	return (0);
}
