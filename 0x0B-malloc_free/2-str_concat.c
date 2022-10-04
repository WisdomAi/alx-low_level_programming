/*
 * Author: Wisdom Ai
 * file: 2-str_concat.c
*/

#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/*
 * main: Write a function that concatenates two strings.
 *
 * Return: Always 0.
*/

int main(void)
{
	char *s;

	s = str_concat("Wisdom", "Akpan");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
