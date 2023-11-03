#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: the tree to measure
 * Return: Height of tree on success, 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = get_height(tree);
	return (depth - 1);
}

/**
 * get_height - calculates the height of a tree
 *
 * @tree: The given tree
 * Return: calculated height
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t r_depth = 0;
	size_t l_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		r_depth = get_height(tree->parent);
	if (tree->parent)
		l_depth = get_height(tree->parent);

	return (1 + (r_depth >= l_depth ? r_depth : l_depth));
}
