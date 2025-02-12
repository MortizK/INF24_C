#include <stdio.h>

#include "lib.h"

int main(void)
{
    // Meine Implementation ist nicht so nice,
    // da mein start schon das erste Element ist und NICHT darauf zeigt
    struct list *start = createList(0);

    printList(start);

    insertAtStart(start, 1);
    insertAtStart(start, 2);
    insertAtStart(start, 3);

    printList(start);

    freeList(start);

    printList(start);
}