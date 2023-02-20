#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b = '\n';
	char a = 'z';
while (a >= 'a')
{	putchar(a);
	a--;
}
putchar(b);
return (0);
}
