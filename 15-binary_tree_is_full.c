#include "binary_trees.h"

/**
 *binary_tree_is_full - Checks if a binary tree is full.
 *@tree: Pointer to the root node of the tree to check.
 *Return: 1 if the tree is full, 0 otherwise.
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	else
		return (0);
}
