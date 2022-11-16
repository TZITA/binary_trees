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

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = node;
		node->left = tmp;
		tmp->parent = node;
		node->parent = parent;
		node->n = value;
	}
	else
	{
		parent->left = node;
		node->n = value;
	}
	return (node);
}
