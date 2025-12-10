#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the node to measure the height
 *
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0;
    size_t right_height = 0;

    if (tree == NULL)
        return (0);

    /* Calcul de la hauteur à gauche */
    /* On ajoute 1 SEULEMENT si l'enfant existe */
    if (tree->left)
        left_height = 1 + binary_tree_height(tree->left);
    else
        left_height = 0;

    /* Calcul de la hauteur à droite */
    if (tree->right)
        right_height = 1 + binary_tree_height(tree->right);
    else
        right_height = 0;

    /* On retourne la plus grande des deux */
    if (left_height > right_height)
        return (left_height);
    else
        return (right_height);
}
