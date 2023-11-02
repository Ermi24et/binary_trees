#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of the node
 *
 * @node: A pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node, but if node is NULL or the parent
 * is NULL, return NULL or if node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
