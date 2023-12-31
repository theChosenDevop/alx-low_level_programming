#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name of the person
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
