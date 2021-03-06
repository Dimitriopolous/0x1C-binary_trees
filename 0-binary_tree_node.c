#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 * @parent: Parent node to point parent pointer to
 * @value: Value to point node->n
 * Return: Pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
