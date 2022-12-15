#include "main.h"

/**
 * _isupper - Entry point
 * @x: The number to be checked
 * Description: Check if letter is uppercased
 *
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)
{
if (x >= 65 && x <= 90)
{
return (1);
}
return (0);
}
