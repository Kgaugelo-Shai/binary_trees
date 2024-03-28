#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node.
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is
 * NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);
	if (node == NULL || parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}

/* 1. malloc node
   2. check if parent node is NULL
   3. if null, return NULL
   4. check if parent is pointing to node
   5. if yes, point node to right child and right child to node
   6. point parent to node
*/