#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Integer value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *tmp;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	node->n = value;

	if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = node;
		tmp->right = NULL;
		tmp->left = NULL;
		tmp->parent = node;
		node->right = tmp;
		node->left = NULL;
		node->parent = parent;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
		node->left = NULL;
		node->parent = parent;
	}
	return (node);
}
