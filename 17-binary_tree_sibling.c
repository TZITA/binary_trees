#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node otherwise NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent)
	{
		if (node->parent->right == node)
		{
			if (node->parent->left)
				return (node->parent->left);
			else
				return (NULL);
		}
		else
		{
			if (node->parent->right)
				return (node->parent->right);
			else
				return (NULL);
		}
	}
	else
		return (NULL);
}
