#include "main.h"

/**
 * _isdigit -function looks for digits
 * @c: parameter
 * Return: 0 or 1
*/

int _isdigit(int c)
{
if (c >= 48 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
