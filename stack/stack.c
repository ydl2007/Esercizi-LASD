
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
		obj -> dimensioni = 0;
		return obj;
	}
}


void stkPush (StackObject *head, char *val) {

		head -> Elements = (char*) realloc (head -> Elements, sizeof (char) * (head->dimensioni+1));
		head -> Elements = head -> Elements + sizeof (char);	

		head -> dimensioni++;
		head -> Elements = val;
		head -> index++;
}

int stkSize (StackObject *stack) {

	return stack -> dimensioni;
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