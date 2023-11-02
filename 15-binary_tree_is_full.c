#include "binary_trees.h"

/**
 * is_full_recursive - Checks if A Binary tree Is fullRrecursively.
 * @tree: A Pointer to the root Node Of the Tree to Check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks If A Binary tree Is full.
 * @tree: A Pointer to the root Node of The tree To check.
 *
 * Return: If Tree is NULL or Is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

