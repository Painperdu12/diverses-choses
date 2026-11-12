/*
 * stack.h
 *
 *  Created on: 9 nov. 2026
 *      Author: DENIZETMAXIME
 */

#ifndef STACK_H_
#define STACK_H_
#include <stdlib.h>

enum Boolean {
	FALSE = 0,
	TRUE = 1
};

struct StackElement {
	struct StackElement *next;
	size_t elementSize;
	unsigned char value[];
};

typedef struct StackElement stack_t;
typedef enum Boolean boolean_e;

stack_t* stackCreate(void);
stack_t* stackPush(stack_t*, unsigned char*);
stack_t* stackPop(stack_t*);
boolean_e stackIsEmpty(stack_t*);

#endif /* STACK_H_ */
