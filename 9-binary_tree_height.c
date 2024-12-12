#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_h = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_h = binary_tree_height(tree->right) + 1;

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
