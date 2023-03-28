#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with
 * at least 1 child in a binary tree.
 * @tree: The tree to be evaluated
 *
 * Return: 0 when tree is NULL or a recursive function call
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
