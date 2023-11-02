#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *n1 = first;
    const binary_tree_t *n2 = second;

    if (first == NULL || second == NULL)
        return (NULL);

    while (n1 != NULL)
    {
        n2 = second;
        while (n2 != NULL)
        {
            if (n1 == n2)
                return ((binary_tree_t *)n1);
            n2 = n2->parent;
        }
        n1 = n1->parent;
    }

    return (NULL);
}
