#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node created
 * @value: Integer value of the new node
 *
 * Return: A pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;

	if (parent == NULL)
	{
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
