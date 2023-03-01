/**
* print_rev - usee to reverse a string
* @s: a pointer that holds the address of a strng
*/

void print_rev(char *s)
{
int count = 0;
int i = 0;
while (s[i] != '\0')
{
i++;
count++
}

while (s[i - 1] <= count)
{
i--;
}
write(1, s, count);
}
