#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Description: Prints the alphabet in lowercase after a check through loop
 *
 * Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
