#include "holberton.h"

/**
 * more_numbers - prints 0-14, followed by a new line
 *
 *
 * Return: void
 */
void more_numbers(void)
{
  int loops, numbers;
  numbers = 0;
  for (loops = 10; loops < 11; loops++)
{
  while(numbers < 15)
{
  if (numbers >= 10)
{
    _putchar(numbers / 10 + '0');
}
  _putchar(numbers + '0');
  numbers++;
}
  __putchar("\n");
}
}
