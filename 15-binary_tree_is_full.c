#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, else 0 or if tree is NULL, return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		return (left_full && right_full);
	}
	return (0);
}
