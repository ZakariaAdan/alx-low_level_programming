#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;

    /* If new_size is zero, free ptr and return NULL */
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL)
    {
        return (malloc(new_size));
    }

    /* If new_size is equal to old_size, return ptr */
    if (new_size == old_size)
    {
        return (ptr);
    }

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);

    /* If malloc fails, return NULL */
    if (new_ptr == NULL)
    {
        return (NULL);
    }

    /* Copy the contents of the old memory block to the new block */
    if (new_size > old_size)
    {
        /* Copy the minimum of old_size and new_size bytes */
        for (i = 0; i < old_size; i++)
        {
            *((char *)new_ptr + i) = *((char *)ptr + i);
        }
    }
    else
    {
        /* Copy all bytes if new_size is less than old_size */
        for (i = 0; i < new_size; i++)
        {
            *((char *)new_ptr + i) = *((char *)ptr + i);
        }
    }

    /* Free the old memory block */
    free(ptr);

    /* Return the pointer to the new memory block */
    return (new_ptr);
}
