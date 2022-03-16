#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Check lowercase
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
{
return (0);
}
}
