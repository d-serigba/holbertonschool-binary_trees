#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* 1. On visite gauche */
    binary_tree_postorder(tree->left, func);

    /* 2. On visite droite */
    binary_tree_postorder(tree->right, func);

    /* 3. On traite le nœud actuel à la toute fin */
    func(tree->n);
}
