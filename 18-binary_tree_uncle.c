#include "binary_trees.h"

/**
 *binary_tree_uncle - Finds the uncle of a node in a binary tree.
 *@node: Pointer to the node to find the uncle for.
 *Return: Pointer to the uncle node, or NULL if no uncle exists.
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grand_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (0);

	parent = node->parent;
	grand_parent = parent->parent;

	if (grand_parent->left == parent)
		return (grand_parent->right);
	else
		return (grand_parent->left);
}
