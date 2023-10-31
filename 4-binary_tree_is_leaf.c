#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @tree: A pointer to the root node of the tree to delete.
 * Return: 1 or 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!tree)
	{
		if (node == NULL || node->right != NULL || node->left != NULL)
		  return (0);

	  return (1);
	}
}