#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: is a pointer to the node to insert the right-child
 * @value: is the value to store in the new node
 * Return: value is the value to store in the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodeRight;

	if (parent == NULL)
		return (NULL);

	newNodeRight = binary_tree_node(NULL, value);

	if (newNodeRight == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = newNodeRight;
		newNodeRight->right = parent->right;
	}
	parent->right = newNodeRight;
	newNodeRight->parent = parent;

	return (newNodeRight);
}
