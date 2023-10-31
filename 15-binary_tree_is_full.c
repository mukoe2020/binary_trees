#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a binary tree is full
*                       or not
* @tree: pointer to the root node of the binary tree
* Return: 1 if tree is full, 0 if tree is NULL or 0 if tree is not full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
/*if tree is empty, do nothing*/
	if (tree == NULL)
		return (0);

/*if the current node is a leaf, the tree is full*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

/*if subtrees exist, recursively check their fullness*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
