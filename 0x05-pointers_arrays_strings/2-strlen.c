#include "main.h"

/**
* _strlen - a funcrion to count the numb of char in strng
* @s: is used to receive the value to be checked by the _strlen()
* Return: count
*/

int _strlen(char *s)
{
int i = 0;
int count = 0;

while (*s[i] != EOF)
{
count++;
i++;
}
return (count);
}
