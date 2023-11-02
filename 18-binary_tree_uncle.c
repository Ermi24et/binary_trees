#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: a pointer to the node to find the uncle
 *Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	grand_parent = node->parent->parent;

	return (((grand_parent == NULL) ?
		NULL :
		((grand_parent->right == node->parent) ?
		 grand_parent->left : grand_parent->right)));
}
