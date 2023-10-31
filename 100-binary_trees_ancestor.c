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

/**
* binary_trees_ancestor - finds the lowest common ancestor node
*                         of two given nodes
* @first: the first given node
* @second: the second given node
* Return: the lowest common ancestor node
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}

	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth--;
	}

	while (first != NULL && second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);


}
