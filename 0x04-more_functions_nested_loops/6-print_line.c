#include "main.h"
/**
* print_line - Is a function used to print the n of lines based on the value of n
*/
void print_line(int n)
{
	int i = 1;
	char newLine = '\n';
	char underScore = '_';
	while ( i <= n)
		{
		_putchar(underScore);
		i++;
		}
	if (i <= 0)
	{
	_putchar(newLine)
	}
	_putchar(newLine);
}
