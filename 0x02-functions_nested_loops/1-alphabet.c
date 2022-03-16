#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - main block
 * Description: prints the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
