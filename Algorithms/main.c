#include "BinaryTree.h"

int main()
{
	Node* nodes[] = { createNode(10), createNode(5), createNode(17), createNode(1), createNode(6), createNode(17), createNode(14) };

	binarySearchInput(nodes[0], nodes[1]);
	binarySearchInput(nodes[0], nodes[2]);
	binarySearchInput(nodes[0], nodes[3]);
	binarySearchInput(nodes[0], nodes[4]);
	binarySearchInput(nodes[0], nodes[5]);
	binarySearchInput(nodes[0], nodes[6]);

	preorderPrint(nodes[0]);

	return 0;
}