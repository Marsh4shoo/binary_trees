#include "binary_trees.h"

/**
 * binary_tree_height - Measures The Height of A Binary tree.
 * @tree: A Pointer to The root Node of the tree To Measure the height.
 *
 * Return: If Tree is NULL, your Function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

