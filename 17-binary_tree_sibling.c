#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds The Sibling of a
 *                       Node in A Binary tree.
 * @node: A pointer to the Node To Find The Sibling of.
 *
 * Return: If node is NULL or There is no Sibling - NULL.
 *         Otherwise - a Pointer to The Sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

