#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes Through A Binary Tree Using in-order traversal.
 * @tree: A Ppointer To The root Node Of The Tree To Traverse.
 * @func: A Pointer to A Function to Call for each Node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

