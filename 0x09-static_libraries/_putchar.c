#include "main.h"
#include <unistd.h>

/**
 * main - entry point
 * Description: prints _putchar
 * Return: 0 always
 */
 int _putchar(char c)
{
	return (write(1, &c, 1));
}
