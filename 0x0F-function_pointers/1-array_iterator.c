#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter.
 * @arry: array of elements.
 * @size: size of array.
 * @action: funtion pointer.
 * 
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
