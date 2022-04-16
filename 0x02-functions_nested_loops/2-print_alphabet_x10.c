#include"main.h"
/**
 *print_alphabet_10times - prints 10 times the alphabet, in lowercas
 */
void print_alphabet_10times(void)
{
	int count = 0;
	char alphabet;
	while (count++ <= 9)
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);
	_putchar('\n');
}
