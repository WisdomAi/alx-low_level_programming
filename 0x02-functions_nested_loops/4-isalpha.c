#include "main"

/**
 * _isalpha - Check is character is a alphabet character
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);

	else
		return (0);
}	
