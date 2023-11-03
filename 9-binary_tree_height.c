#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: the tree to measure
 * Return: Height of tree on success, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = get_height(tree);
	return (height - 1);
}

/**
 * get_height - calculates the height of a tree
 *
 * @tree: The given tree
 * Return: calculated height
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t r_height = 0;
	size_t l_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		r_height = get_height(tree->right);
	if (tree->left)
		l_height = get_height(tree->left);

	return (1 + (r_height >= l_height ? r_height : l_height));
}
