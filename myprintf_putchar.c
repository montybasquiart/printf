#include "main.h"

/**
 * myprintf_putchar - print a character
 * @m: char input
 * Return: number of bytes (1)
 */
int myprintf_putchar(char c)
{
	return (write(1, &c, 1));
}
