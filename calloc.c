#include "monty.h"

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size in bytes of the array
 * Return: pointer to the array or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)arr + i) = 0;
	}
	return (arr);
}
