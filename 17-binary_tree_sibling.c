#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling/parent
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Si je suis l'enfant de gauche, mon frère est à droite */
    if (node->parent->left == node)
        return (node->parent->right);

    /* Sinon, je suis à droite, donc mon frère est à gauche */
    return (node->parent->left);
}
