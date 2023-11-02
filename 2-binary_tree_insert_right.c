#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: parent of the new node to be inserted
 * @value: value to be inserted in the new node
 * Return: pointer to new node or NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = newnode;
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
	return (newnode);
}
