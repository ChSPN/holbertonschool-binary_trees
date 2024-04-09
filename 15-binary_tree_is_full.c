#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If the tree is empty, it is considered full */
	if (tree == NULL)
		return (1);

	/* If the tree has no children, it is considered full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the tree has both left and right children, recursively check them */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If any of the above conditions fail, the tree is not full */
	return (0);
}
