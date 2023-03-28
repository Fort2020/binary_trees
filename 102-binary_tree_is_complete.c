#include "binary_trees.h"

/**
 * complete - a function that checks if a binary tree is complete.
 * @tree: a pointer to the root of the tree
 * @index: index for right and left child
 * @count: the size of the tree
 *
 * Return: 1 if complete 0 if not
 */
int complete(const binary_tree_t *tree, int index, int count)
{
if (tree == NULL)
return (1);
if (index >= count)
return (0);
return (complete(tree->left, 2 * index + 1, count) &&
complete(tree->right, 2 * index + 2, count));
}
/**
 * binary_tree_is_complete - checks if tree is complete or not
 * @tree: a pointer to the root of the tree
 *
 * Return: 1 if complete 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
int count = binary_tree_size(tree);
int index = 0;

if (tree == NULL)
return (0);
return (complete(tree, index, count));
}
