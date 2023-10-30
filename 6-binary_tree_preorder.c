#include "binary_trees.h"
/**
* binary_tree_preorder - a function that uses the pre-order method of traversal
* @tree: pointer to the root node of a binary tree
* @func: a function pointer to print values in a node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	func(tree->n); /*print value of the current node or root */

/*recursively visit and print values of the left child, and right*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
