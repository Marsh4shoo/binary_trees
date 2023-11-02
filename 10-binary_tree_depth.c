#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the Depth of a Node in A Binary tree.
 * @tree: A Pointer To the Node to Measure The Depth.
 *
 * Return: If tree Is NULL, Your fFnction must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

