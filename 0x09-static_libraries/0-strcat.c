#include "main.h"

#include <stdio.h>



/**
 *_strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */



char *_strcat(char *dest, char *src)

{

	int a = 0, j = 0;



	while (dest[a] != '\0')

		a++;



	while (src[j] != '\0')

	{

	dest[a] = src[j];

	a++;

	j++;

	}

	dest[a] = '\0';



	return (dest);

}
