#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int pld)
{

pld = (pld % 10);

if (pld < 0)

pld = (-1 * pld);

_putchar(pld + '0');
return (pld);
}
