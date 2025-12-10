#include "binary_trees.h"

/**
 * tree_height - Helper function to measure height
 * @tree: Tree to measure
 * Return: Height
 */
int tree_height(const binary_tree_t *tree)
{
    int l = 0, r = 0;
    
    if (tree == NULL)
        return (-1); // Important pour distinguer NULL de feuille

    l = tree_height(tree->left);
    r = tree_height(tree->right);

    return (1 + (l > r ? l : r));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int h_left = 0;
    int h_right = 0;

    if (tree == NULL)
        return (0);

    /* Si c'est une feuille, c'est parfait */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* On compare les hauteurs */
    h_left = tree_height(tree->left);
    h_right = tree_height(tree->right);

    /* Condition : Même hauteur ET les sous-arbres sont aussi parfaits */
    if (h_left == h_right)
    {
        return (binary_tree_is_perfect(tree->left) && 
                binary_tree_is_perfect(tree->right));
    }

    return (0);
}
