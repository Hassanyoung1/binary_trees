#include "binary_trees.h"

/**
 * binary_tree_delete -  Deletes a binary tree
 *
 * @tree: The tree to be deleted
 * Return: 0
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
