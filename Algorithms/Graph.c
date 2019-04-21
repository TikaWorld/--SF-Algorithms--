#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

Node* create_node(int value) {
	Node* node = malloc(sizeof(Node));
	node->value = value;
	node->order = 0;
	node->trunk = malloc(sizeof(Node*));

	return node;
}

void connect_node(Node* node_1, Node* node_2) {
	Node** temp = (Node **)malloc(sizeof(Node*) * (node_1->order + 1));
	memcpy(temp, node_1->trunk, sizeof(Node*) * (node_1->order + 1));
	node_1->trunk = (Node**)realloc(node_1->trunk, sizeof(Node*) * (node_1->order + 1));
	memcpy(node_1->trunk, temp, sizeof(Node*) * (node_1->order + 1));
	node_1->trunk[node_1->order] = node_2;
	node_1->order++;
	free(temp);
	
	temp = (Node **)malloc(sizeof(Node*) * (node_2->order + 1));
	memcpy(temp, node_2->trunk, sizeof(Node*) * (node_2->order + 1));
	node_2->trunk = (Node**)realloc(node_2->trunk, sizeof(Node*) * (node_2->order + 1));
	memcpy(node_2->trunk, temp, sizeof(Node*) * (node_2->order + 1));
	node_2->trunk[node_2->order] = node_1;
	node_2->order++;
	free(temp);
}

void disconnect_node(Node* node) {
	for (int i = 0; i < node->order; i++) {
		if (node->trunk[i] != NULL)
			for (int j = 0; j < node->trunk[i]->order; j++)
				if (node->trunk[i]->trunk[j] == node) {
				node->trunk[i]->trunk[j] = NULL;
				break;
				}
		node->trunk[i] = NULL;
	}
}

void DFS(Node* node) {
	Node* buffer;
	printf("\n%d ", node->value);
	for (int i = 0; i < node->order; i++) {
		if (node->trunk[i] == NULL)
			continue;
		buffer = node->trunk[i];
		disconnect_node(node);
		DFS(buffer);
	}
}

Node** search_connect(Node* node) {
	for (int i = 0; i < node->order; i++) {
		printf("%d ", node->trunk[i]->value);
	}
	return node->trunk;
}