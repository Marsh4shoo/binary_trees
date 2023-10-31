#include "binary_trees.h"

/**
 * binary_tree_node - creates Binary tree node
 * @parent: is a pointer to the Parent node of the Node to create
 * @value: is the value to put in the new Node
 *
 * Return: Pointer to the new nodde or NULL.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
