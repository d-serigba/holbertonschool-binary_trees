#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    /* Vérifications de sécurité : Il faut un nœud, un parent, et un grand-parent */
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Appelons le grand-parent pour que ce soit plus lisible */
    binary_tree_t *grandparent = node->parent->parent;

    /* Si mon parent est à gauche du grand-parent, l'oncle est à droite */
    if (grandparent->left == node->parent)
        return (grandparent->right);

    /* Sinon, l'oncle est à gauche */
    return (grandparent->left);
}
