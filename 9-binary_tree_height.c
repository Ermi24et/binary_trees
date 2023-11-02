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
	size_t L_depth, R_depth;

	if (tree == NULL)
		return (0);

	L_depth = (1 + binary_tree_height(tree->left));
	R_depth = (1 + binary_tree_height(tree->right));

	return (L_depth > R_depth ? L_depth : R_depth);
}
