#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: 1 char
 * @src: 2 char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
