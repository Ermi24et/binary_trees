#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: A pointer to the root node
 * Return: the size of the tree or if tree is NULL, return 0
 */

size_t binary_tree_size(const  binary_tree_t *tree)
{
	size_t Left = 0, Right = 0;

	if (!tree)
		return (0);

	Left = binary_tree_size(tree->left);
	Right = binary_tree_size(tree->right);
	return (1 + Left + Right);
}
