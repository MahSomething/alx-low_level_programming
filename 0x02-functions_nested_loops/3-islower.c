#include "main.h"

int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (c == i)
{
return (1);
}
_putchar('\n');
}
return (0);
}
