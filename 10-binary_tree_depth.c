#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: depth of the tree
 * If the tree is NULL, your function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	right = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return ((left > right) ? left : right);
}
