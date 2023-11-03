#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: the tree to count
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int status;

	if (tree == NULL)
		return (0);

	status = get_status(tree);
	return (status);
}

/**
 * get_status - returns if a tree is full or not
 *
 * @tree: The given tree
 * Return: 1 if full, 0 otherwise
 */
size_t get_status(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
		return (get_status(tree->right) && get_status(tree->left));

	return (0);
}
