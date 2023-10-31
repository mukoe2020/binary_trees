#include "binary_trees.h"

/**
* binary_tree_sibling - a function that finds the sibling of a node
* @node: pointer to the node looking for its sibling
* Return: pointer to the node of the other sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
/*if the node is the right child, return its sibling or vice versa*/
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
