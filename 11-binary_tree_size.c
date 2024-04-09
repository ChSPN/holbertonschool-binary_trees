#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	/* Recursively count the size of the left and right subtrees */
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}
