#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a  = 'a';
	char b = '\n';

	for (a <= 'z'; a++)
	{
		if (a !='e' && a != 'q')
		putchar(a);
	}
putchar(b);
return (0);
}
