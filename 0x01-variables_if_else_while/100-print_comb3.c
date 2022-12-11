#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prins tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(',');
				putchar(' ');
				if (!(ones == '0' && tens == '8'))/*adds commas and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');
	return (0);
}
