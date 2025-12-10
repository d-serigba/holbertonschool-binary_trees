#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Vérification de sécurité standard */
    if (tree == NULL || func == NULL)
        return;

    /* 1. On applique la fonction sur le nœud actuel (ex: print) */
    func(tree->n);

    /* 2. On part en récursion vers la gauche */
    binary_tree_preorder(tree->left, func);

    /* 3. On part en récursion vers la droite */
    binary_tree_preorder(tree->right, func);
}
