#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


Stack* createStack(int num) {
	Stack* stack;
	stack = (Stack*)malloc(sizeof(Stack));
	stack->value = (int*)malloc(sizeof(int) * num);
	stack->top = 0;

	return stack;
}

void deleteStack(Stack* stack) {
	free(stack->value);
	free(stack);
}

void push(Stack* stack,int value) {
	stack->value[stack->top] = value;
	stack->top++;
}

int pop(Stack* stack) {
	stack->top--;
	return stack->value[stack->top];
}

void stackPrint(Stack* stack) {
	for (int i = 0; i < stack->top; i++)
		printf("%d ", stack->value[i]);
	printf("\n");
}