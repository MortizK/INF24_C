# Libaries

Es wird unterschieden zwischen Libaries die schon exisitern und custom Libaries, welche wir selber schreiben.

Hier geht es um ein eigenes Libarie, welches sich um Listen Operatoren handelt.

## Header Datei

```
#ifndef LIB_H
#define LIB_H

// Notwendige Includes
#include <stdint.h>

// Initializierung alle Funktionen
int add(int a, int b);

#endif
```

## Die .c-Datei

```
#include <stdbool.h>
#include <stdlib.h>

// inlcude custome Libarie
#include "lib.h"

// Deklaration der Funktionen aus lib.h
int add(int a, int b) {
    return a + b;
}
```

# Listen

Ein Liste ist einfach ein `struct` mit einem Pointer zu dem nächstem element in der Liste. Wenn dieser `next` Pointer = `NULL` ist, so ist dies das Ende der Liste

```
struct list {
    int data;
    struct list * next;
};

int main(void) {
    struct list * start = NULL;

    // Erstellung des ersten Elementes
    start = (struct list *) malloc(sizeof(struct list));
    start->data = 0;
    start->next = NULL;
}
```

# Aufgabe

Erstelle ein Libarie, mit mehreren Funktionen:

1. Erstellen einer Leeren Liste
2. Hinzufügen eines Elementes Vorne
3. Löschen eines Elementes Vorne
4. Beliebiges Element bearbeiten
5. Freigabe der Gesamte Liste von dem Speicher

