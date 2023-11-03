#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes of a binary tree
 *
 * @tree: the tree to count
 * Return: count of nodes on success, 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	nodes = get_size(tree);
	return (nodes);
}

/**
 * get_size - calculates the count of nodes with at least 1 child in a tree
 *
 * @tree: The given tree
 * Return: calculated count
 */
size_t get_size(const binary_tree_t *tree)
{
	size_t r_nodes = 0;
	size_t l_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
	{
		r_nodes = get_size(tree->right);
		l_nodes = get_size(tree->left);
		return (1 + r_nodes + l_nodes);
	}

	return (r_nodes + l_nodes);
}
