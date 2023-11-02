#include "binary_trees.h"

/**
 * binary_tree_nodes - counts  the nodes with at at least 1 child
 * in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes with at least 1 child or if tree is NULL, return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t Left = 0, Right = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	Left = binary_tree_nodes(tree->left);
	Right = binary_tree_nodes(tree->right);
	return (1 + Left + Right);
}
