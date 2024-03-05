#include "function_pointers.h"
/**
 * print_name - prints names
 * @name: ponter to the name
 * @f: pointer to a fucntion
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
