#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index = 0;
	int is_complete = 1;
	size_t q_size = 0;
	const binary_tree_t **queue = NULL;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	queue = malloc(sizeof(binary_tree_t *) * size);
	if (queue == NULL)
		return (0);

	queue[q_size++] = tree;
	while (index < size)
	{
		const binary_tree_t *current = queue[index++];

		if (current->left)
			queue[q_size++] = current->left;
		if (current->right)
			queue[q_size++] = current->right;

		if ((current->left && !current->right) || (!current->left && current->right))
		{
			is_complete = 0;
			break;
		}
	}

	free(queue);
	return (is_complete);
}
