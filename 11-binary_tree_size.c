#include "binary_trees.h"

/**
 * binary_tree_size - Measures The Size Of A Binary tree.
 * @tree: A Pointer To The root Node Of the tree to measure the size of.
 *
 * Return: The Size of The tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}

