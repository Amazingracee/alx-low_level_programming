#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: First string
 * @src: Second string
 * @n: number of chars to copy
 *
 * Return: edited string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
