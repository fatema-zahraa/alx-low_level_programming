#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: "print "alpha 10 times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int j;
	for (i = 1; i <= 10; i++)
{
	for (j = 97; i <= 122; j++)
{
	_putchar(j);
}
	_putchar('\n');
}
}
