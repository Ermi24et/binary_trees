#include "binary_trees.h"

/**
 *binary_tree_node - a function that creates a binary tree node
 *@parent: a pointer to the parent node of the node
 *@value: the value to put into the new node
 *Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
