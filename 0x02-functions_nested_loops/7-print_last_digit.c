#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int digit;
digit = n % 20;
if (digit < 0)
{
digit = digit * -1;
}
_putchar(digit + '0');
return (digit);
}
