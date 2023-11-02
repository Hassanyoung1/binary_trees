#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

    /* Allocate memory for the new node */
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

    /* Check if parent is NULL */
	if (parent == NULL)
	{
	return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->n = value;
		return (newnode);
	}

    /* Initialize the new node */
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	newnode->right = NULL;
	return (newnode);
}
