#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <malloc.h>
#define T int

typedef struct TList {
  T val;
  struct TList *next;
} TList;

TList *initList(T val) {
  TList *list = (TList*)malloc(sizeof(TList));
  list->val = val;
  list->next = NULL;
  return list;
}

TList *addToList(TList *list, T val) {
  TList *newListItem = (TList*)malloc(sizeof(TList));
  newListItem->val = val;
  newListItem->next = list->next;
  list->next = newListItem;
  return newListItem;
}

void printList(TList *list) {
  TList *current = list;

  while (current != NULL) {
    printf("%d ", current->val);
    current = current->next;
  }
}

#endif /* LIST_H_ */
