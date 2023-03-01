/**
* _puts - Receives a ptr to strng and print it using write()
* @str: is the pointer holding the address of strng
*/

#include "main.h"
#include <unistd.h>
void _puts(char *str)
{
int i = 0;
int count = 0;
char newLine = '\n';
while (str[i] != '\0')
{
count++;
i++;
}
write(1, str, count);
write(1, newLine, 1);
}
