#include <stdio.h>
#include <stdlib.h>

#pragma once

typedef struct graphNode {
	int value;
	int order;
	struct graphNode** trunk;
}Node;

Node* create_node(int value);
void connect_node(Node* node_1, Node* node_2);
void disconnect_node(Node* node_1, Node* node_2);
void DFS(Node* node);
Node** search_connect(Node* node);