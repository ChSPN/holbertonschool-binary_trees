#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree == NULL)
        return (0);

    /* If the node has at least one child, increment the count */
    if (tree->left != NULL || tree->right != NULL)
        nodes++;

    /* Recursively count the nodes in the left and right subtrees */
    nodes += binary_tree_nodes(tree->left);
    nodes += binary_tree_nodes(tree->right);

    return (nodes);
}
