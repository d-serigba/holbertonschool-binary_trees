# Binary Trees

**Description :**

This project is a thorough introduction to Binary Trees in the C programming language.

A binary tree is a fundamental hierarchical data structure where each element, called a node, has a value and at most two children: a left child and a right child.

The goal of this project is to understand and implement basic operations (creation, insertion, deletion), traversal methods (pre-order, in-order, post-order), as well as analysis tools (height measurement, balance verification, etc.) on these structures.

**Data Structure**

All exercises in this project use the following structure, defined in binary_trees.h. Note the inclusion of a pointer to the parent node, which simplifies upward movement within the tree.

Code :

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

**Requirements and Compilation** :

OS: Ubuntu 20.04 LTS

Compiler: gcc

Style: The code must follow the Betty style guidelines.

All files must be compiled with the following flags :

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89`

**Print Function**

A utility function, binary_tree_print.c, is provided to visualize trees in the terminal during testing. It must be included in the compilation command when running your test main files.

Example compilation command for task 0 :

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-binary_tree_node.c binary_tree_print.c -o 0-node`

**File List and Tasks**

The project is divided into independent functions organized by category.

**Main Header**

binary_trees.h: Contains the structure definition, prototypes for all functions, and standard library inclusions.

**1. Basic Operations**

0-binary_tree_node.c = Creates a new binary tree node.

1-binary_tree_insert_left.c = Inserts a node as the left-child of another node.

2-binary_tree_insert_right.c = Inserts a node as the right-child of another node.

3-binary_tree_delete.c = Deletes an entire binary tree (uses post-order traversal to avoid memory leaks).

**2. Simple Checks**

4-binary_tree_is_leaf.c = Checks if a node is a leaf (no children).

5-binary_tree_is_root.c	= Checks if a node is a root (no parent).

**3. Traversals**

6-binary_tree_preorder.c = Goes through a binary tree using pre-order traversal (Root -> Left -> Right).

7-binary_tree_inorder.c	= Goes through a binary tree using in-order traversal (Left -> Root -> Right).

8-binary_tree_postorder.c = Goes through a binary tree using post-order traversal (Left -> Right -> Root).

**4. Measures and Counting**

9-binary_tree_height.c = Measures the height of a tree (distance from root to furthest leaf).

10-binary_tree_depth.c = Measures the depth of a node (distance from node to root).

11-binary_tree_size.c =	Counts the total number of nodes in the tree.

12-binary_tree_leaves.c	= Counts the number of leaves in the tree.

13-binary_tree_nodes.c = Counts the nodes with at least one child.

**5. Structural Annlysis**

14-binary_tree_balance.c = Measures the balance factor of a tree (Left Height - Right Height).

15-binary_tree_is_full.c = Checks if a binary tree is "Full" (every node has either 0 or 2 children).

16-binary_tree_is_perfect.c = Checks if a binary tree is "Perfect" (Full and all leaves are at the same level).

**6. Family Relationships**

17-binary_tree_sibling.c = Finds the sibling of a node (the node sharing the same parent).

18-binary_tree_uncle.c = Finds the uncle of a node (the sibling of the parent).

**By :**

Bernis Kouzou (GitHub : Niber236)

& 

Dylan Serigba (GitHub : d-serigba)
