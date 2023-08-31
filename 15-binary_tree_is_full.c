#include "binary_trees.h"

/**
 * is_full_recursive - this function checks recursively if a binary tree is full.
 * @tree: the pointer to the root node of the tree to check.
 *
 * Return: 0 if the tree is not full otherwise return 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - this function checks if a binary tree is full.
 * @tree: the pointer to the root node of the tree to check.
 *
 * Return: 0 if the tree is NULL or is not full.
 * otherwise 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
