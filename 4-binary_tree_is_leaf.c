#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks If A Node is A Leaf Of A Binary tree.
 * @node: A Pointer To The Node To Check.
 *
 * Return: If The Node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

