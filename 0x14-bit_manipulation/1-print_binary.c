#include "main.h"

/**
* print_binary - function prints the binary of a decimal number
* @n: printed binary number
*/
void print_binary(unsigned long int n)
{
unsigned long int current;
int i = 63, count = 0;

while (i >= 0)
{
current = n >> i;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
{
_putchar('0');
}
i--;
}

if (!count)
{
_putchar('0');
}
}
