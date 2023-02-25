#include "main.h"
void print_numbers(void)
{
char number;
char newLine = '\n';
for (number = '0'; number <= '9'; number++)
{
	_putchar(number);
}
	_putchar(newLine);
}
