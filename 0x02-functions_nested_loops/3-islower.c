#include "main.h"

/**
 * _islower - Entry point
 * @c: single letter input
 * Description: A function that checks for lowewrcase character
 *
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
