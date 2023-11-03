#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of a binary tree
 *
 * @tree: the tree to measure
 * Return: Height of tree on success, 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = get_size(tree);
	return (size);
}

/**
 * get_size - calculates the height of a tree
 *
 * @tree: The given tree
 * Return: calculated height
 */
size_t get_size(const binary_tree_t *tree)
{
	size_t r_size = 0;
	size_t l_size = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		r_size = get_size(tree->right);
	if (tree->left)
		l_size = get_size(tree->left);

	return (1 + (r_size + l_size));
}

