#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
	int* value;
	int first;
	int last;
} Queue;

Queue* createQueue(int num) {
	Queue* queue;
	queue = (Queue*)malloc(sizeof(Queue));
	queue->value = (int*)malloc(sizeof(int) * num);
	queue->first = 0;
	queue->last = 0;

	return queue;
}

void deleteQueue(Queue* queue) {
	free(queue->value);
	free(queue);
}

void queuePush(Queue* queue, int value) {
	queue->value[queue->last] = value;
	queue->last++;
}

int queuePop(Queue* queue) {
	queue->first--;
	return queue->value[queue->first];
}

void queuePrint(Queue* queue) {
	for (int i = 0; i < queue->last; i++)
		printf("%d ", queue->value[i]);
	printf("\n");
}