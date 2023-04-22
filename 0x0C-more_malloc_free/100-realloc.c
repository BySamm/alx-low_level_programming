#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Function to reallocate memory
 * @ptr: Pointer to the last mem allocated
 * @old_size: Last mem size allocated
 * @new_size: Mem size to be allocated
 * Return: Pointer to new alloc size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr, *last_pntr;
	int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	pntr = malloc(new_size);
	if (!pntr)
	{
		return (NULL);
	}
	last_pntr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; (size_t)i < new_size; i++)
		{
			pntr[i] = last_pntr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; (size_t)i < old_size; i++)
		{
			pntr[i] = last_pntr[i];
		}
	}
	free(ptr);
	return (pntr);
}
