#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a Node as A left-child of
 *                           Of Another In a binary tree.
 * @parent: A pointer to The Node to Insert the left-child in.
 * @value: The value to Store in The New node.
 *
 * Return: If parent is NULL or An Error Ooccurs - NULL.
 *         Otherwise - a pointer To the New node.
 *
 * Description: If Parent Already Has a left-child, The new Node
 *              takes its place and the old left-child is Set as
 *              the left-child of The New Node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

