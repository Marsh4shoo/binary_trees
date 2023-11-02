#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes A Binary Tree.
 * @tree: A Pointer To The root Node Of The Tree To Delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

