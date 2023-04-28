#include "main.h"
/**
 * _islower-check if character is lowercase.
 * @c:character to check if it islowercase.
 * Return: 1 if lowercase or 0 if anything else.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}
