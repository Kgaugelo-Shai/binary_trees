#include "binary_trees.h"

/**
 * binary_tree_size - counts the number of leaves in a binary tree
 * @tree: pointer to root of tree
 * Return: number of leaves
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
