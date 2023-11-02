#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be inserted in the new node
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->n = value;
		return (newnode);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->parent->right = parent->right;
	newnode->left = NULL;

	/* Update parent left child */
	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
