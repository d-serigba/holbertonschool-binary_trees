#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Uses post-order traversal to free memory.
 * Does nothing if tree is NULL.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    /* Condition d'arrêt de la récursion */
    if (tree == NULL)
        return;

    /* 1. On supprime d'abord tout le sous-arbre gauche */
    binary_tree_delete(tree->left);

    /* 2. On supprime ensuite tout le sous-arbre droit */
    binary_tree_delete(tree->right);

    /* 3. Enfin, on supprime le nœud actuel */
    free(tree);
}
