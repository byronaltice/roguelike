#include "stdafx.h"
#include <iostream>
using namespace std;

struct BinTreeNode{
	int iVal;
	BinTreeNode* left = NULL;
	BinTreeNode* right = NULL;
};
int MaxDepth(BinTreeNode*);
int MinDepth(BinTreeNode*);
bool IsBalanced(BinTreeNode*);
int _tmain(int argc, _TCHAR* argv[])
{
	//This tree is not balanced;
	BinTreeNode * root = new BinTreeNode;
		root->left = new BinTreeNode;
			root->left->left = new BinTreeNode;
			root->left->right = new BinTreeNode;
				root->left->right->left = new BinTreeNode;
					root->left->right->left->left = new BinTreeNode;
		root->right = new BinTreeNode;
			root->right->left = new BinTreeNode;
			root->right->right = new BinTreeNode;

	if (IsBalanced(root))
		cout << "yep";
	else cout << "nope";

	return 0;
}

int MaxDepth(BinTreeNode* node)
{
	if (node == NULL)
		return 0;
	int leftDepth = MaxDepth(node->left) + 1;
	int rightDepth = MaxDepth(node->right) + 1;
	return leftDepth > rightDepth ? leftDepth: rightDepth;
}
int MinDepth(BinTreeNode* node)
{
	if (node == NULL)
	return 0;
	int leftDepth = MaxDepth(node->left) + 1;
	int rightDepth = MaxDepth(node->right) + 1;
	return leftDepth < rightDepth ? leftDepth : rightDepth;
}
bool IsBalanced(BinTreeNode* node)
{
	int maxDepth = MaxDepth(node);
	int minDepth = MinDepth(node);
	if (maxDepth - minDepth > 1)
		return false;
	return true;
}

