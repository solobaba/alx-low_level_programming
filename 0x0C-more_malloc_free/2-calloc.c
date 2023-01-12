#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: numbers of element in array.
 * @size: size of element of array.
 *
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory allocated if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return( NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
