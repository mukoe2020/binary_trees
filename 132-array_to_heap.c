#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int h;
	heap_t *root = NULL;

	for (h = 0; h < size; h++)
		heap_insert(&root, array[h]);

	return (root);
}
