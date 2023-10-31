#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of binary tree, tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (tree == NULL)
	return (0);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
