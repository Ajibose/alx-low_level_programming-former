#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to be printed
 * @f: pointer to a function
 *
 * Description: prints a name using function pointers
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
