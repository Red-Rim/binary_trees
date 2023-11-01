#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes with at least one child.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least one child, or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_n = binary_tree_nodes(tree->left);
    size_t right_n = binary_tree_nodes(tree->right);

    if (tree->left || tree->right)
        return (left_n + right_n + 1);

    return left_n + right_n;
}
