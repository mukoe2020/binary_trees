#include "binary_trees.h"

/**
 * array_to_avl - converts a AVL tree from an array
 * @array: a list of integers
 * @size: size of the array
 * Return: root node of the AVL tree
 */
bst_t *array_to_avl(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t h;

	for (h = 0; h < size; h++)
	{
		avl_insert(&tree, array[h]);
	}

	return (tree);
}
