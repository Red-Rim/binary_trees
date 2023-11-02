#include "binary_trees.h"

/**
 * binary_tree_is_complete - Check if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    int is_leaf_found = 0;
    binary_tree_t *queue[1024];  /* Assuming a maximum of 1024 nodes */
    int front = 0, rear = 0;

    if (tree == NULL)
        return (0);

    queue[rear++] = (binary_tree_t *)tree;

    while (front < rear)
    {
        binary_tree_t *current = queue[front++;

        if (current == NULL)
        {
            is_leaf_found = 1;
        }
        else
        {
            if (is_leaf_found)
                return (0);

            queue[rear++] = current->left;
            queue[rear++] = current->right;
        }
    }

    return (1);
}
