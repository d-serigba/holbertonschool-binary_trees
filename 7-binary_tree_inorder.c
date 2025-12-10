#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Toujours la sécurité */
    if (tree == NULL || func == NULL)
        return;

    /* 1. D'abord, on va tout au fond à gauche */
    binary_tree_inorder(tree->left, func);

    /* 2. Ensuite, on traite l'élément actuel (le milieu) */
    func(tree->n);

    /* 3. Enfin, on va à droite */
    binary_tree_inorder(tree->right, func);
}
