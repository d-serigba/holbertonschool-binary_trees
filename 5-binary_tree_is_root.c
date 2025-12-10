#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    /* 1. Si le nœud n'existe pas, il ne peut pas être une racine */
    if (node == NULL)
        return (0);

    /* 2. Si le pointeur parent est NULL, c'est que c'est la racine */
    if (node->parent == NULL)
        return (1);

    /* Sinon, ce n'est pas une racine */
    return (0);
}
