#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal based on input
 *
 * @n: length of line
 * Return: void
 */
void print_diagonal(int n)
{
int i, whitespace;

whitespace = 0;
if (n <= 0)
_putchar(10);
while (n > 0)
{
i = 0;
while (whitespace != i)
{
_putchar(' ');
i++;
}
_putchar('\\');
_putchar('\n');
n--;
whitespace++;
}
}
