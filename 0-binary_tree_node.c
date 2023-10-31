#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer to the parent of the node.
 * @value: The value to be puted on the new node.
 *
 * Return: NULL If it fails else a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *tree = malloc(sizeof(binary_tree_t));

    if (tree == NULL)
        return (NULL);

    tree->n = value;
    tree->parent = parent;
    tree->left = NULL;
    tree->right = NULL;

    return (tree);
}
