#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the left of another
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value stored in the new node
 *
 * Return: A pointer to created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *tmp;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL || parent->left == NULL)
	{
		return (NULL);
	}
	node->n = value;
	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = node;
		node->left = tmp;
		tmp->left = NULL;
		tmp->right = NULL;
		tmp->parent = node;
		node->right = NULL;
		node->parent = parent;
	}
	else
	{
		parent->left = node;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
	}
	return (node);
}
