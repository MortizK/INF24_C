#ifndef LIB_H
#define LIB_H

struct list *createList(int startValue);
void printList(struct list *start);
void insertAtStart(struct list *start, int value);
void freeList(struct list *start);

#endif