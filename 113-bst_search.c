#include "binary_trees.h"

/**
 * bst_search - a function that searches for a value in a Binary Search Tree.
 *
 * Return: If tree is NULL or if nothing is found.
 */
bst_t *bst_search(const bst_t *tree, int value)
{

	if (tree == NULL)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
	return (NULL);
}

