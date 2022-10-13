#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function as a parameter
 * on each element of an array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: function to call for each element of array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
