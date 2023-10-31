#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_hgt, right_hgt;

    if (tree == NULL)
        return (0);

    left_hgt = binary_tree_height(tree->left);
    right_hgt = binary_tree_height(tree->right);

    return (left_hgt > right_hgt ? left_hgt + 1 : right_hgt + 1);
}
