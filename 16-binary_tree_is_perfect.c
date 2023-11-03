#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks whether a binary tree is perfect
 *
 * @tree: Tree to check
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	return (get_status(tree));

}

/**
 * get_status - returns status of a given tree
 *
 * @tree: tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
size_t get_status(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (get_status(tree->left) && get_status(tree->right));
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: the node to check
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
