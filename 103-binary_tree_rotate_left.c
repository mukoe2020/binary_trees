#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (tree);

	binary_tree_t *new_root = tree->right;

	tree->right = new_root->left;

	if (new_root->left != NULL)
		new_root->left->parent = tree;

	new_root->parent = tree->parent;

	if (tree->parent == NULL)
	{
		new_root->parent = NULL;
	}
	else if (tree->parent->left == tree)
	{
		tree->parent->left = new_root;
	}
	else
	{
		tree->parent->right = new_root;
	}

	tree->parent = new_root;
	new_root->left = tree;

	return (new_root);
}

