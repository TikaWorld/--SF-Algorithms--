#include "Stack.h"

int main()
{
	Stack* stack = createStack(5);
	push(stack, 1);
	push(stack, 2);
	push(stack, 3);
	stackPrint(stack);

	pop(stack);
	pop(stack);
	stackPrint(stack);

	deleteStack(stack);

	return 0;
}