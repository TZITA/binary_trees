#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if it is full otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
		    (tree->left != NULL && tree->right == NULL) ||
		    binary_tree_is_full(tree->left) == 0 ||
		    binary_tree_is_full(tree->right) == 0)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
