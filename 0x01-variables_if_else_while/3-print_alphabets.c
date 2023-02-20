#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';
	char c = '\n';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
		{
		putchar(b);
		b++;
		}
	putchar(c);
return (0);
}
