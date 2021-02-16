#include "holberton.h"

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
int j;

j = 0;
while (s[j] != '\0')
j++;
return (j);
}
