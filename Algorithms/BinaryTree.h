#include <stdio.h>

typedef struct node {
	struct node* right;
	struct node* left;
	int value;
}Node;

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

int main()
{
	Node** node[] = { createNode(1), createNode(2), createNode(3) };
	allocateNode(node[0], node[1], node[2]);
	preorderPrint(node[0]);
	inorderPrint(node[0]);
	postorderPrint(node[0]);
	for (int i = 0; i < 3; i++) {
		free(node[i]);
	}
}