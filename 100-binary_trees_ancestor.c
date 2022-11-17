#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: If no common ancestors NULL, otherwise common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *m, *f;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	m = first->parent;
	f = second->parent;
	if (first == f || !m || (!m->parent && f))
		return (binary_trees_ancestor(first, f));
	else if (m == second || !f || (!f->parent && m))
		return (binary_trees_ancestor(m, second));
	return (binary_trees_ancestor(m, f));
}
