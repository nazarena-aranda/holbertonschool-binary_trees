#include "binary_trees.h"

/**
 *
 *
 *
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
 *
 *
 *
 */


int is_perfect_subtree(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
	return (1);

	if (tree->left == NULL && tree->right == NULL)
	return (level == depth);

	if (tree->left == NULL || tree->right == NULL)
	return (0);

	return (is_perfect_subtree(tree->left, depth, level + 1) &&
	is_perfect_subtree(tree->right, depth, level + 1));
}

/**
 *
 *
 *
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = get_depth(tree);

	return (is_perfect_subtree(depth, tree, 0));


}
