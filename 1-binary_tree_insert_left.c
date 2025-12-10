#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    /* 1. On crée le nouveau nœud en utilisant notre fonction précédente */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* 2. Si le parent avait déjà un enfant à gauche */
    if (parent->left != NULL)
    {
        /* Le nouvel enfant adopte l'ancien enfant gauche */
        new_node->left = parent->left;
        
        /* IMPORTANT : On met à jour le parent de l'ancien enfant */
        new_node->left->parent = new_node;
    }

    /* 3. Le parent pointe maintenant vers le nouveau nœud */
    parent->left = new_node;

    return (new_node);
}
