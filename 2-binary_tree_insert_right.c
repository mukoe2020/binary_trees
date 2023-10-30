#include "binary_trees.h"

/**
* binary_tree_insert_right - a function that inserts a node as the right-child
* @parent: the parent of the is a pointer to the node to
*           insert the right-child in
* @value: the value to insert within the new left child node
* Return: new left child node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right;

	if (parent == NULL)
		return (NULL);

	old_right = parent->right;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = old_right;
	new_node->left = NULL;

/* If parent already has a right-child, the new node takes its place */
	if (old_right != NULL)
	/* parent pointer of existing left child points to the newnode*/
		old_right->parent = new_node;

	parent->right = new_node;
	return (new_node);
}


