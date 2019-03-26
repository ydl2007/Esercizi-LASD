
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
/* ************************************************************************** */

StackObject* stkConstruct (void) {

	StackObject *stack = (StackObject*) malloc (sizeof (StackObject));
	stack -> data = (int*) calloc (MAX_SIZE, sizeof (int));
	stack -> top = 0;
	stack -> capacity = MAX_SIZE;
	return stack;
}

int stkPush (StackObject *stack, int *element) {

	if (stack -> top < MAX_SIZE){

		*(stack -> data + stack -> top) = element;
		stack -> top++;
		return 0;
	} else {
		printf("Stack pieno!\n");
		return -1;
	}
}

int stkSize (StackObject *stack) {

	return stack -> top-1;
}

int stkTopNPop (StackObject *stack) { 

	int ret = *stack -> data;
	free (stack -> data);
	stack -> top--;
	return ret;
}

// ...
