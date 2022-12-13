#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: A funcrion that prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
int n, counter;
counter = 0;
while (counter < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
counter++;
_putchar('\n');
}
}
