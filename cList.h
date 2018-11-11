#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <malloc.h>

typedef struct TList {
  int val;
  struct TList *next;
} TList;

TList *initList(int val) {
  TList *list = (TList*)malloc(sizeof(TList));
  list->val = val;
  list->next = NULL;
  return list;
}

TList *addToList(TList *list, int val) {
  TList *newListItem = (TList*)malloc(sizeof(TList));
  newListItem->val = val;
  newListItem->next = list->next;
  list->next = newListItem;
  return newListItem;
}

#endif /* LIST_H_ */
