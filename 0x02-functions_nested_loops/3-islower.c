#include "main.h"

/**
 * _islower - To check if a char is lower case
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0,
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
