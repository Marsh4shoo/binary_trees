#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert A Node As The right-child
 *                            of Another In A Binary tree.
 * @parent: A Pointer To The Node To Insert The right-child in.
 * @value: The Value to Store In The New node.
 *
 * Return: If Parent Is NULL or An Error Occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If Parent Already has A right-child, The new node
 *              takes its place and the old right-child Is set as
 *              the right-child of The New Node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

