#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 * Return: A pointer to the new root node of the tree after the rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    binary_tree_t *new;

    if (tree == NULL || tree->left == NULL)
        return (tree);

    new = tree->left;
    tree->left = new->right;

    if (new->right != NULL)
        new->right->parent = tree;

    new->parent = tree->parent;

    if (tree->parent == NULL)
        new->parent = NULL;
    else if (tree == tree->parent->left)
        tree->parent->left = new;
    else
        tree->parent->right = new;

    new->right = tree;
    tree->parent = new;

    return (new);
}
