#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes Through A Binary Tree Using pre-order traversal.
 * @tree: A Pointer To The Root Node Of the Tree To traverse.
 * @func: A Pointer To A Function to Call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

