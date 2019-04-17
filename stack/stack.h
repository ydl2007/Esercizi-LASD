
#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 32 * (sizeof (int))

/* ************************************************************************** */

#include "../utility.h"

/* ************************************************************************** */

typedef struct StackObject
{
	char **Elements;
	uint index;
	uint dimensioni;
} StackObject;

/* ************************************************************************** */

StackObject* stkConstruct (void);
//int stkDestruct(StackObject *stack);

//int stkEmpty(StackObject *stack);
//int stkPop(StackObject *stack);
// type stkTopNPop(arguments);
//int stkPush (StackObject **head, char *val);
int stkSize (StackObject *stack);

// type stkClone(arguments);
// type stkEqual(arguments);
// type stkExists(arguments);
// type stkMap(arguments);
// type stkFold(arguments);

/* ************************************************************************** */

#endif
