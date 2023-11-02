#include "binary_trees.h"

/**
 *binary_tree_height - a function that measures a height of binary tree
 *@tree: a pointer to the root node of the tree to measure the height
 *Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ledg, redg, max;

	if (tree == NULL)
		return (0);

	ledg = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	redg = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	max = ledg > redg ? ledg : redg;
	return (max);
}

/**
 *binary_tree_size - a function that returns a size of binary tree
 *@tree: a pointer to the root node of the tree to check
 *Return: size of binary tree, otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}

/**
 *binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *@tree: a pointer to the root node of the tree to check
 *Return: 0 if tree is NULL
 *
 */

int binary_tree_is_perfect(binary_tree_t *tree)
{
	size_t heig = 0, psize = 0;

	if (tree == NULL)
		return (0);
	heig = binary_tree_height(tree);
	psize = (1 << (h + 1)) - 1;

	if (psize == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
