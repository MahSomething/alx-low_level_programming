#include "main.h"

/**
*print_alphabet - will run the loop and send the char to _putchar
*/
void print_alphabet_10x(void)
{
int j = 1;
while (j <= 10)
	{	
	char i;
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}
}
