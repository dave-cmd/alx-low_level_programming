#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal based on input
 *
 * @n: length of line
 * Return: void
 */
void print_diagonal(int n)
{
  while (n != 0){
    if (n == 1){
      _putchar(92);
    }
    else {
      int x;
      x = n-1;
      while(x > 0){
	_putchar(' ');
	x = x - 1;
      }
      _putchar(92);

    }
    n = n - 1;
    _putchar('\n');
 }
}
