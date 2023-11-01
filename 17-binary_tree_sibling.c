#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 * Return: A pointer to the sibling node, or NULL if the sibling is not found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	node->parent->left == NULL || node->parent->right == NULL)
	return (NULL);

	if (node == node->parent->left)
	return (node->parent->right);
	else
	return (node->parent->left);
}
