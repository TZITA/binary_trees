#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent->parent)
	{
		if (node->parent->parent->right == node->parent)
		{
			if (node->parent->parent->left)
				return (node->parent->parent->left);
			return (NULL);
		}
		else
		{
			if (node->parent->parent->right)
				return (node->parent->parent->right);
			return (NULL);
		}
	}
	return (NULL);
}
