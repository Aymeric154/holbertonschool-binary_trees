#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 *
 * Return: Null,  if node is null or no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent = node->parent->parent;

	if (node == NULL || node->parent == NULL || 
			grand_parent == NULL)
		return (NULL);

	if (grand_parent->left == node->parent)
		return (grand_parent->right);

	else if (grand_parent->right == node->parent)
		return (grand_parent->left);

	return (0);

}
