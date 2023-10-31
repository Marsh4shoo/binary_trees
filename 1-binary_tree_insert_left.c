#include "binary_trees.h"

/**
 * binary_tree_insert_left_child - Inserts a new node as the left child of an existing node.
 * @parent: The parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL on error.
 */
binary_tree_t *binary_tree_insert_left_child(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent) {
        return NULL;
    }

    new_node = binary_tree_node_new(parent, value);
    if (!new_node) {
        return
 
NULL;
    }

    if (parent->left) {
        new_node->left = parent->left;
        new_node->left->parent = new_node;
    }

    parent->left = new_node;

    return new_node;
}
