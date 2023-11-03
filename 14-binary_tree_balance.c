#include "binary_trees.h"

/**
 * get_height - measures the height of a binary tree
 *
 * @tree: The tree to be measured
 * Return: The height of the tree, 0 if tree is NULL
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = get_height(tree->left);
	right_height = get_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: The tree to measure
 * Return: Balance factor on success, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = get_height(tree->left);
	right_height = get_height(tree->right);

	return (left_height - right_height);
}
