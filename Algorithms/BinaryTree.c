#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

Node* createNode(int value) {
	Node* node = malloc(sizeof(Node));
	node->value = value;
	node->right = NULL;
	node->left = NULL;

	return node;
}

void allocateNode(Node* node, Node* left, Node* right) {
	node->right = right;
	node->left = left;
}

void preorderPrint(Node* node) {
	printf("%d\n", node->value);
	if (node->left != NULL)
		preorderPrint(node->left);
	if (node->right != NULL)
		preorderPrint(node->right);
}

void inorderPrint(Node* node) {
	if (node->left != NULL)
		inorderPrint(node->left);
	printf("%d", node->value);
	if (node->right != NULL)
		inorderPrint(node->right);
}

void postorderPrint(Node* node) {
	if (node->left != NULL)
		inorderPrint(node->left);
	if (node->right != NULL)
		inorderPrint(node->right);
	printf("%d", node->value);
}
