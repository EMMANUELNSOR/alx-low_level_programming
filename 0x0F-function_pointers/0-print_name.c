#include "function_pointers.h"
#include <stlib.h>

/**
 * print_name - prints the name
 * @name: name
 * @f: function
 */
void print_name(char *nme, void (*f)(char *))
{
	if (name == NULL || f== NULL)
		return;
	f(name);
}
