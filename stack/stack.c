
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ************************************************************************** */

StackObject* stkConstruct (void) {

	StackObject *obj = (StackObject*) malloc (sizeof (StackObject*));

	if (obj) {
		obj -> Elements = NULL;
		obj -> index = 0;
		obj -> size = 0;
		return obj;
	}
}


void stkPush (StackObject *stack, char *val) {

		
		if (stack->size > 0){
			stack -> index++;
		} else {
			stack -> Elements = (char**) malloc (sizeof (char*));
		}

		stack -> size++;
		int pointerOffset = stack->size * sizeof(char*);

		stack -> Elements = (char**) realloc (stack->Elements, pointerOffset);
		stack -> Elements [stack->index] = val;
}

int stkSize (StackObject *stack) {

	return stack -> size;
}


int* stkTopNPop (StackObject *stack) { 

	char* ret = (char*) malloc (sizeof(char*));

	ret = stack->Elements[stack->index];
	stack->size--;
	stack->index--;
	return ret;
}
/*

// ...
*/