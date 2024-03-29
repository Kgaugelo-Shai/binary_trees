#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: if null returns 0, else the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_factor;

	if (tree == NULL)
		return (0);

	b_factor = (binary_tree_height(tree->left) -
		    binary_tree_height(tree->right));
	return (b_factor);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root of binary tree
 * Return: height of tree in size_t
 *         If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return ((left > right) ? left : right);
}
