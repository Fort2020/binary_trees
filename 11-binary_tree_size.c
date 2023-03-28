#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree.
 * @tree: root node of tree to measure from
 *
 * Return: size of tree from a given node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t count;

if (tree == NULL)
	return (0);

count = binary_tree_size(tree->left) + 1;
count += binary_tree_size(tree->right);

return (count);
}
