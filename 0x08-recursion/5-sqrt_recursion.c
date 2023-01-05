#include "main.h"

/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}
/**
 * sqrt_function - recurses to find the natural
 * square root of a number
 * @n: input
 * @i: iterator
 * Return: the resulting square root
 */
int sqrt_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt(n, i + 1));
}
