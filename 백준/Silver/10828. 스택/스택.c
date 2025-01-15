#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#define SIZE 10000

typedef struct stack {
	int data[SIZE];
	int top;
}Stack;
void init_stack(Stack* s) {
	s->top = -1;
}
void push(Stack* s) {
	scanf("%d", &s->data[++s->top]);
}
int pop(Stack* s) {
	if (s->top == -1) return -1;
	return s->data[s->top--];
}
int size(Stack* s) {
	return s->top + 1;
}
int empty(Stack* s) {
	return (s->top < 0);
}
int top(Stack* s) {
	if (s->top == -1) return -1;
	return s->data[s->top];
}

int main(void) {
	Stack a;
	init_stack(&a);
	int input;
	char proc[7];
	scanf("%d", &input);
	for (; input--;) {
		scanf("%s", proc);
		if (!strcmp(proc,"push")) {
			push(&a);
		}
		else if (!strcmp(proc, "pop")) {
			printf("%d\n", pop(&a));
		}
		else if (!strcmp(proc, "size")) {
			printf("%d\n", size(&a));
		}
		else if (!strcmp(proc, "empty")) {
			printf("%d\n", empty(&a));
		}
		else if (!strcmp(proc, "top")) {
			printf("%d\n", top(&a));
		}
	}
	return 0;
}