#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: The number of leaves under the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		l += 1;
	l += binary_tree_leaves(tree->left);
	l += binary_tree_leaves(tree->right);

	return (l);
}
