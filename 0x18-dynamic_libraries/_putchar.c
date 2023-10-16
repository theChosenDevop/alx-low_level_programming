#include "main.h"
#include <unistd.h>
/**
 * _putchar - print one character at a time
 * Description: prints _putchar
 * @c: character
 * Return: 0 always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
