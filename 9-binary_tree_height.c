#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree or if the tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_depth = 0, r_depth = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l_depth = binary_tree_height(tree->left);
	r_depth = binary_tree_height(tree->right);
	if (l_depth > r_depth)
		return (l_depth + 1);

	return (r_depth + 1);
}
