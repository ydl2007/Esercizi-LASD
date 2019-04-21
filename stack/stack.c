
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

		int pointerOffset = stack->size * sizeof(char*);
		
		if (stack->size > 0){
			stack -> index++;
		} 

		stack -> size++;
		stack -> Elements = (char**) realloc (stack->Elements, pointerOffset);
		char** cur = stack -> Elements + pointerOffset;
		*cur = val;
}

int stkSize (StackObject *stack) {

	return stack -> size;
}

/*

int* stkTopNPop (StackObject *stack) { 
	printf("stack top: %d\n", stack -> top); //DBG

	if (stack -> top >= 0){
		int *ret = (int*) malloc (sizeof (int));
		printf("stack value: %d\n", *stack -> data); //DBG

		memcpy ((stack -> data + stack -> top), &ret, sizeof (int*));
		printf("return value: %d\n", *ret); //DBG

		free (stack -> data);
		stack -> top--;
		return ret;
	} else return -1;
}

// ...
*/