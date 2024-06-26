#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);  /* Traverse le sous-arbre gauche */

	func(tree->n);  /* Appelle la fonction func avec la valeur du nœud actuel */

	binary_tree_inorder(tree->right, func);  /* Traverse le sous-arbre droit */
}
