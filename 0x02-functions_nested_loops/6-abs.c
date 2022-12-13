#include "main.h"

/**
 * _abs - Entry point
 * @ab: integer input
 * Description: A function that computes the absolute value of an integer
 *
 * Return: absolute value of ab
 */

int _abs(int ab)
{
return (ab * ((ab > 0) - (ab < 0)));
}
