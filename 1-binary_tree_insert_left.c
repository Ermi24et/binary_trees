#include "binary_trees.h"

/**
 * binary_tree_insert_left - inset a node as the left-child of another node
 * @parent: The parent of the new node
 * @value: The value for the new created node
 *
 * Return: Pointer to the new created node or NULL of failure/parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insertL_node = NULL;

	if (!parent)
		return (NULL);

	insertL_node = binary_tree_node(parent, value);

	insertL_node->left = parent->left;
	if (insertL_node->left)
		insertL_node->left->parent = insertL_node;

	parent->left = insertL_node;
	return (insertL_node);
}
