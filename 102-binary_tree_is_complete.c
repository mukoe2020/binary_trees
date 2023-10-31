#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

/**
 * check_is_complete - binary_tree_is_complete helper
 * @root: tree
 * @index: index of the node
 *
 * @size: size of the tree
 * Return: 0 (not complete) | 1 (complete)
 */
int check_is_complete(const binary_tree_t *root, int index, int size)
{

	if (root == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (check_is_complete(root->left, 2 * index + 1, size)
		&& check_is_complete(root->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - check if a binary tree is complete
 * @tree: tree
 *
 * Return: 0 if not complete & 1 if complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_is_complete(tree, 0, (int)binary_tree_size(tree)));
}
