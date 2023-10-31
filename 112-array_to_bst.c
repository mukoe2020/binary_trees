#include "binary_trees.h"

/**
* array_to_bst - builds a binary search tree from an array
* @array: the array
* @size: size of the array
* Return: a binary search tree
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *b_tree;
	size_t idx;

	if (array == NULL)
		return (NULL);
	b_tree = NULL;

	for (idx = 0; idx < size; idx++)
	{
		bst_insert(&b_tree, array[idx]);
	}

	return (b_tree);
}
