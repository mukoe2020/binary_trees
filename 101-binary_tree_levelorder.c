#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree 0 if tree is NULL
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * level_print - prints node by level
 * @tree: pointer to the root node of the tree
 * @func: the function to call for each node
 * @lvl: the level to print out
 */

void level_print(const binary_tree_t *tree, void(*func)(int), int lvl)
{
	if (tree && func)
	{
		if (lvl == 1)
			func(tree->n);
		else
		{
			level_print(tree->left, func, lvl - 1);
			level_print(tree->right, func, lvl - 1);
		}
	}
}

/**
 * binary_tree_levelorder - function that traverses through a binary tree
 *                          using level order traversal
 * @tree: the pointer to the root node of the tree
 * @func: the function to call the node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0, i = 1;

	if (tree && func)
	{
		height = binary_tree_height(tree);
		while (i <= height + 1)
		{
			level_print(tree, func, i);
			i++;
		}
	}
}

