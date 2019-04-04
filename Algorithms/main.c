//#include "BinaryTree.h"
#include "LinkedList.h"

Node route;

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