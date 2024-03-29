#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 *         If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += (tree->left != NULL || tree->right != NULL) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
