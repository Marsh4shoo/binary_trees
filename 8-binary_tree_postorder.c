#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses A Binary tree Using post-order traversal.
 * @tree: A Pointer To the root Node Of the tree To Traverse.
 * @func: A Pointer to A Function to call for Each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

