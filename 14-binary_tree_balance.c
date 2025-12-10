#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree for balance
 * @tree: Tree to measure
 * Return: Height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
    size_t l = 0;
    size_t r = 0;

    if (tree == NULL)
        return (0);

    /* Ici, on calcule la hauteur totale (nœuds) pour comparer */
    l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
    r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;

    return ((l > r) ? l : r);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor (int)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_h = 0;
    int right_h = 0;

    if (tree == NULL)
        return (0);

    /* On calcule la hauteur du sous-arbre gauche */
    if (tree->left)
        left_h = (int)binary_tree_height_b(tree->left);

    /* On calcule la hauteur du sous-arbre droit */
    if (tree->right)
        right_h = (int)binary_tree_height_b(tree->right);

    /* La formule magique */
    return (left_h - right_h);
}
