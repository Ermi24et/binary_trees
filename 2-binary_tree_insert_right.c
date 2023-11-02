#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: a pointer to the node to insert the right-child on
 *@value: a value to insert in the new node
 *Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = newnode;
	else
	{
		newnode->right = parent->right;
		parent->right = newnode;
		newnode->right->parent = newnode;
	}
	return (newnode);
}
