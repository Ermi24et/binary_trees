#include "binary_trees.h"

/**
 *binary_tree_height - a function that measures a height of bianry tree
 *@tree: a pointer to the root node of the tree to measure the height
 *Return: height of a bianry tree, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lv, rv, max;

	if (tree == NULL)
		return (0);
	lv = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rv = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	max = lv > rv ? lv : rv;
	return (max);
}

/**
 *binary_tree_balance - a func that measures the balance factor of binary tree
 *@tree: a pointer to the root of the node of the tree to measure the balance
 *factor
 *Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree_left)
		- binary_tree_height(tree->right));
}
