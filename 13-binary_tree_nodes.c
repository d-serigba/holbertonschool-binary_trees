#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes counting at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Si j'ai un enfant à gauche OU un enfant à droite */
    if (tree->left != NULL || tree->right != NULL)
    {
        /* 1 (moi) + ceux d'en dessous */
        return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
    }

    return (0);
}
