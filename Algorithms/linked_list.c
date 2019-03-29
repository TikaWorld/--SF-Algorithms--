#include <stdio.h>
#pragma warning(disable:4996)

typedef struct node {
	struct node* next_node;
	int value;
}Node;

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
	for (int i = 1; i < num; i++) {
		tracking = tracking->next_node;
		printf("%d", tracking->value);
	}
	printf("\n");
}

int main() 
{
	int instruction;
	int count = 0;
	int operand_1, operand_2;
	while (1) {
		view(count);
		scanf("%d", &instruction);
		switch (instruction)
		{
		case 0: 
			printf("INSERT Node Number:");
			scanf("%d", &operand_1);
			printf("INSERT Node Value:");
			scanf("%d", &operand_2);
			insert_node(operand_1, operand_2);
			count++;
			break;
		case 1:
			printf("DELETE Node Number:");
			scanf("%d", &operand_1);
			delete_node(operand_1);
			count--;
			break;
		default:
			break;
		}
		system("cls");
	}
	
	return 0;
}