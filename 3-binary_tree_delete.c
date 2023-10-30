#include "binary_trees.h"
/**
* binary_tree_delete - a function that deletes an entire binary tree
* @tree: the binary tree's root node to be deleted
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/*If tree is NULL, do nothing*/
	if (tree == NULL)
	{
		return;
	}
	/*recursively deleting children of the tree*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*free current node left */
	free(tree);
}
