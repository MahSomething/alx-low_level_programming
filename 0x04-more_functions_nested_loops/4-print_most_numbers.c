#include "main.h"
/**
* print_most_numbers - this function is used to print numbers as characters
*/
void print_most_numbers(void)
{
char number;
char newLine = '\n';

for (number = '0'; number <= '9'; number++)
{
	if (number != '2' && number != '4')
	{
	_putchar(number);
	}
}
	_putchar(newLine);
}
