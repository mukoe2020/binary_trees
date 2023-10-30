#include "binary_trees.h"

/**
* binary_tree_insert_left - a function that inserts a node as the left-child
* @parent: the parent of the is a pointer to the node to
*           insert the left-child in
* @value: the value to insert within the new left child node
* Return: new left child node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left;

	if (parent == NULL)
		return (NULL);

	old_left = parent->left;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = old_left;

/* If parent already has a left-child, the new node takes its place */
	if (old_left != NULL)
	/* parent pointer of existing left child points to the newnode*/
		old_left->parent = new_node;

	parent->left = new_node;
	return (new_node);
}
