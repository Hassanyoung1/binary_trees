#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right child of a parent
 * @parent: Pointer to the parent node
 * @value: Value to be inserted in the new node
 * Return: Pointer to the newly inserted node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp_right;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right != NULL)
	{
		temp_right = parent->right;
		parent->right = newnode;
		newnode->right = temp_right;
		temp_right->parent = newnode;
	}
	else
	{
		parent->right = newnode;
	}

	return (newnode);
}

