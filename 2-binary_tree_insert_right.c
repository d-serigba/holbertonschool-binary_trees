#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    /* 1. Création du nœud */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* 2. Si le parent avait déjà un enfant à droite */
    if (parent->right != NULL)
    {
        /* Le nouvel enfant adopte l'ancien enfant droit */
        new_node->right = parent->right;
        
        /* IMPORTANT : Mise à jour du parent de l'ancien enfant */
        new_node->right->parent = new_node;
    }

    /* 3. Liaison finale */
    parent->right = new_node;

    return (new_node);
}
