#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_hgt, right_hgt;

    if (tree == NULL)
        return (0);

    left_hgt = binary_tree_height(tree->left);
    right_hgt = binary_tree_height(tree->right);

    return (1 + (left_hgt > right_hgt ? left_hgt : right_hgt));
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The balance factor of the tree, or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_hgt, right_hgt;

    if (tree == NULL)
        return (0);

    left_hgt = (int)binary_tree_height(tree->left);
    right_hgt = (int)binary_tree_height(tree->right);

    return (left_hgt - right_hgt);
}
