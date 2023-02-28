#include "main.h"
#include <unistd.h>

void _puts(char *str)
{
int sizeOfStrng = _strlen(str);
 write(1, &str, sizeOfStrng);
}
