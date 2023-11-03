#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 *
 * @tree: the tree to count
 * Return: count of leaves on success, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	leaves = get_size(tree);
	return (leaves);
}

/**
 * get_size - calculates the height of a tree
 *
 * @tree: The given tree
 * Return: calculated height
 */
size_t get_size(const binary_tree_t *tree)
{
	size_t r_leaves = 0;
	size_t l_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		r_leaves = get_size(tree->right);
	if (tree->left)
		l_leaves = get_size(tree->left);
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (r_leaves + l_leaves);
}
