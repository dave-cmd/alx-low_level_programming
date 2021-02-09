#include <stdio.h>
#include "_putchar.c"
/**
 * main - print Holberton without printf.
 *
 * Return: Always 0.
 */
int main(void)
{
char c[] = "Holberton";
int size = sizeof(c) / sizeof(c[0]);
int i;
for (i = 0; i < size; i++)
{
_putchar(c[i]);
}
_putchar("\n");
return (0);
}
