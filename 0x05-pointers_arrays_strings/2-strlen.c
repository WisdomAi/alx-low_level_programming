#include "main.h"

/**
 * _strlen - returns ths length of a string.
 * @s: input stringeturn.
 * Return: lenght of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
