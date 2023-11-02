#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if A Node Is A Root of A Binary tree.
 * @node: A Pointer To The Node To Check.
 *
 * Return: If The node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

