#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j, len;
i = 0;
while (*(dest + i))
{
i++;
}
len = i;
j = 0;
while (*(src + j))
{
*(dest + len + j) = *(src + j);
j++;
}
return (dest);
}
