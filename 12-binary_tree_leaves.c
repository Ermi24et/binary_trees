#include "binary_trees.h"

/**
 *bianry_tree_leaves - a function that counts the leaves in a binary tree
 *@tree: a pointer to the root node of the tree to count the number of leaves
 *Return: number of leaves or 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nl;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	nl = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (nl);
}
