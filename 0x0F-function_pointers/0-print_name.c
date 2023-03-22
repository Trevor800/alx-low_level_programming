#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: function is the name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
