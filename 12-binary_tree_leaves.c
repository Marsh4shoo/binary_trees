#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts The leaves In A Binary tree.
 * @tree: A Pointer to The root Node of the Tree To count The Leaves of.
 *
 * Return: The Number of Leaves In the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}

