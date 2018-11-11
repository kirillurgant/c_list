#include <stdio.h>
#include "../../cList.h"

typedef struct TStack {
  TList *head;
  int size;
  int maxSize;
} TStack;

TStack *initStack(int maxSize);
void push(TStack *stack, T val);
T pop(TStack *stack);

int main(int argc, char const *argv[]) {
  TStack *stack1 = initStack(100);

  push(stack1, 10);
  push(stack1, 20);
  push(stack1, 45);
  push(stack1, 60);

  printf("%d ", pop(stack1));
  printf("%d ", pop(stack1));
  printf("%d ", pop(stack1));
  printf("%d ", pop(stack1));
  printf("%d ", pop(stack1));
  puts("");
  return 0;
}

TStack *initStack(int maxSize) {
  TStack *stack1 = (TStack*)malloc(sizeof(TStack));
  stack1->head = NULL;
  stack1->size = 0;
  stack1->maxSize = maxSize;
}

void push(TStack *stack, T val) {
  if (stack->size >= stack->maxSize) {
    printf("Stack overflow!");
    return;
  }

  TList *temp = (TList*)malloc(sizeof(TList));
  temp->val = val;
  temp->next = stack->head;
  stack->head = temp;
  stack->size += 1;
}

T pop(TStack *stack) {
  if (stack->size == 0) {
    printf("Stack is empty! \n");
    return 0;
  }

  TList *head = stack->head;
  T val = head->val;
  stack->head = head->next;
  free(head);
  stack->size -= 1;

  return val;
}
