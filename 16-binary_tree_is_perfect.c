#include "binary_trees.h"

/**
 *get_depth - Calculates the depth of the tree by following the left subtree.
 *@tree: Pointer to the root node of the tree.
 *Return: The total depth of the tree.
 */


size_t get_depth(const binary_tree_t *tree)
{
	size_t r_depth, l_depth;

	if (tree == NULL)
		return (0);

	r_depth = get_depth(tree->right);
	l_depth = get_depth(tree->left);

return ((l_depth > r_depth ? l_depth : r_depth) + 1);
}

/**
 *is_perfect_subtree - Checks if a subtree is perfect.
 *@tree: Pointer to the current node of the subtree.
 *@depth: Total depth of the tree.
 *@level: Current level of the node.
 *Return: 1 if the subtree is perfect, 0 otherwise.
 */


int is_perfect_subtree(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (level == depth - 1);

	if (tree->left == NULL || tree->right == NULL)
	return (0);

	return (is_perfect_subtree(tree->left, depth, level + 1) &&
	is_perfect_subtree(tree->right, depth, level + 1));
}

/**
 *binary_tree_is_perfect - Checks if a binary tree is perfect.
 *@tree: Pointer to the root node of the tree.
 *Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = get_depth(tree);

	return (is_perfect_subtree(tree, depth, 0));


}
