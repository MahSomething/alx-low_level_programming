/**
* print_numbers - this function is used to print numbers as characters
* @number: used to save the iterrated numbers
* @newLine: is used to print the new line
*/
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
