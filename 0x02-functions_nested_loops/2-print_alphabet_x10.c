B#include <stdio.h>
/**
 *main - Prints the size of several data types
 *
 *Description: The function will print the size of char, int, long int,
 *long long int, and float data types.
 *Return: 0 if the function went through to completion successfully
 *
 *print_alphabet
 *
 */
void print_alphabet_x10(void)
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
int times, i;
times = 10;
for (i = 0; i < times; i++)
{
print_alphabet_x10();
_putchar("\n");
}
return (0);
}
