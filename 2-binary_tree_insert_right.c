#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node.
 * @parent: A pointer to the node to insert the right child in.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *n;

    if (parent == NULL)
        return (NULL);

    n = binary_tree_node(parent, value);
    if (n == NULL)
        return (NULL);

    if (parent->right)
    {
        n->right = parent->right;
        parent->right->parent = n;
    }

    parent->right = n;
    return (n);
}
