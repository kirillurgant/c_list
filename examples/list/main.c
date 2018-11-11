#include <stdio.h>
#include "../../cList.h"

int main(int argc, char const *argv[]) {
  TList *list1 = initList(10);
  addToList(addToList(addToList(list1, 25), 30), 48);
  printf("%d \n", list1->val);
  printf("%d \n", list1->next->val);
  printf("%d \n", list1->next->next->val);
  printf("%d \n", list1->next->next->next->val);
  printList(list1);
  puts("");
  return 0;
}
