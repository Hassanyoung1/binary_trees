#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *
 * @parent: parent of the new node to be inserted
 * @value: value to be inserted e
 * Return: NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *holder;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->n = value;
		return (newnode);
	}

	holder = parent->left;
	parent->left = newnode;
	newnode->parent = parent;
	newnode->left = holder;
	newnode->right = NULL;
	newnode->n = value;
	holder->parent = newnode;
	return (newnode);


}
