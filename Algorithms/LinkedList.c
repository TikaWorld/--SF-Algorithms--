#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#pragma warning(disable:4996)

Node route;

Node* tracking_list(int num) {
	Node* tracking = &route;
	for (int i = 0; i < num; i++) {
		tracking = tracking->next_node;
	}
	return tracking;
}

void insert_node(int num, int value) {
	Node* forward = tracking_list(num - 1);
	Node* create_node = malloc(sizeof(Node));
	create_node->value = value;
	create_node->next_node = forward->next_node; 
	forward->next_node = create_node;
}

void delete_node(int num) {
	Node* forward = tracking_list(num - 1);
	Node* trash = forward -> next_node;
	forward->next_node = trash->next_node;
	free(trash);
}

void view(int num) {
	Node* tracking = &route.next_node;
	for (int i = 1; i <= num; i++) {
		tracking = tracking->next_node;
		printf("%d", tracking->value);
	}
	printf("\n");
}

