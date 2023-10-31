/*
 * binary_tree_node_zvinoira.c - A binary tree node implementation by Marshal Zvinoira.
 */

#include "binary_trees.h"

/**
 * binary_tree_node_zvinoira - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_node_zvinoira(binary_tree_t *parent, int value)

{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL) {
        return
 
NULL;
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
