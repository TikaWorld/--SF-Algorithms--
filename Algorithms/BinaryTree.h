#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	struct node* right;
	struct node* left;
	int value;
}Node;

Node* createNode(int value);

void binarySearchInput(Node* root, Node* input);

void allocateNode(Node* node, Node* left, Node* right);

void preorderPrint(Node* node);

void inorderPrint(Node* node);

void postorderPrint(Node* node);