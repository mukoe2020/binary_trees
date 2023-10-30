#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a tree
* @tree: pointer to the node for measurement
* Return: 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_of_node = 0; /* iterating and storing depth*/
/* If tree is NULL, your function must return 0 */
	if (tree == NULL)
		return (0);

/*traversing through from node up to its root node*/
	while (tree->parent)
	{
		depth_of_node++;
		tree = tree->parent;
	}

	return (depth_of_node);
}
