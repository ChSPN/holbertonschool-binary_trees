#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if @tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * print_given_level - Prints nodes at a given level.
 * @tree: Pointer to the root node of the tree to traverse.
 * @level: Level to print.
 * @func: Pointer to the function to call for each node.
 */
void print_given_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
    if (tree == NULL)
        return;
    if (level == 1)
        func(tree->n);
    else if (level > 1)
    {
        print_given_level(tree->left, level - 1, func);
        print_given_level(tree->right, level - 1, func);
    }
}

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: If @tree or @func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (i = 1; i <= height; i++)
		print_given_level(tree, i, func);
}
