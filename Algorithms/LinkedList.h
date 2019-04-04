#pragma once
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct node {
	struct node* next_node;
	int value;
}Node;

Node* tracking_list(int num);
void insert_node(int num, int value);
void delete_node(int num);
void view(int num);