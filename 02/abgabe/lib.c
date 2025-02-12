#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

struct list
{
    int value;
    struct list *next;
};

void printList(struct list *start)
{
    struct list *current = start;
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

struct list *createList(int startValue)
{
    struct list *start = malloc(sizeof(struct list));
    start->next = NULL;
    start->value = startValue;

    return start;
}

void insertAtStart(struct list *start, int value)
{
    struct list *newStart = malloc(sizeof(struct list));
    newStart->next = start->next;
    newStart->value = start->value;
    start->next = newStart;
    start->value = value;
}

void freeList(struct list *start)
{

    struct list *current = start;
    struct list *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = NULL;
        current = next;
    }
    start->next = NULL;
}