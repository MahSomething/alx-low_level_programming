/**
* more_numbers - Is a function used for printing numbers from 0 to 14
*/

#include "main.h"
void more_numbers(void)
{
	int i;
	int j;
	char bewLine = '\n';
for (i = 0; i <= 10; i++)
	{
	for (j = 0; j <= 15; j++)
	{
		if (j < 9)
			{
			_putchar(j % 10 + '0');
			}
		_putchar(j / 10 + '0');
	}
	_putchar(newLine);
	}
}
