#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    /* 1. Si le nœud n'existe pas, ce n'est pas une feuille */
    if (node == NULL)
        return (0);

    /* 2. Vérification : gauche ET droite doivent être NULL */
    if (node->left == NULL && node->right == NULL)
        return (1);

    /* Sinon, ce n'est pas une feuille */
    return (0);
}
