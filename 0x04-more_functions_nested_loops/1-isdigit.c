#include "holberton.h"
/**
 * _isdigit - Checks to see if parameter is an number letter or not.
 *
 * @c: int to check
 * Return: returns 1 if number, returns 0 if not.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else 
{
return (0);
}
}
