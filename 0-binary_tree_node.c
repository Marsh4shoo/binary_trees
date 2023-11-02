#include "binary_trees.h"

/**
 * binary_tree_node - Creates Binary Tree Node
 * @parent: is a pointer to the Parent Node of The Node to Create
 * @value: is the Value To Put in The New Node
 *
 * Return: Pointer To the New nodde or NULL.
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
