#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the Uncle Of A Node
 *                     in A Binary Tree.
 * @node: A Pointer To The Node to Find The Uncle of.
 *
 * Return: If node is NULL or has no Uncle, NULL.
 *         Otherwise, A Pointer to The Uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

