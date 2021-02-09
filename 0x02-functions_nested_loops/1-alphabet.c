#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char first = 'a';
while (first <= 'z')
{
_putchar(first);
first = first + 1;
}
}
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
