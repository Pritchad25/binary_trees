#include "binary_trees.h"

/**
 * binary_tree_nodes - this function counts the nodes with
 * at least 1 child in a binary tree.
 * @tree: the pointer to the root node of the tree to
 * count the number of nodes.
 *
 * Return: 0 if tree is NULL, otherwise return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
