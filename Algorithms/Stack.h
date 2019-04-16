#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
	int* value;
	int top;
}Stack;

Stack* createStack(int num);
void deleteStack(Stack* stack);
void push(Stack* stack, int value);
int pop(Stack* stack);
void stackPrint(Stack* stack);