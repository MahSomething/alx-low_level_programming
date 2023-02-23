/**
 *times_table - Returns the Absolute value of any number
 *i, j , c: is a in intiger value
 *
 * Return: 1 for lowercase. 0 for the rest.
 */

void times_table(void)
{
int i, j, c;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i * j);
}
_putchar('\n');
}
return (0);
}

