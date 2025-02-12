# Externe Variablen

Wir können über `Strg Alr A` Eingabe an die `main()` übergeben.

Um die aus der `main()` auszulesen muss diese ergänzt werden:

```
#inlcude <stdio.h>

int main(int argc, char* argv[]) {
    // argc ist die Anzahl der Argumente,
    // wobei argc = 0 der Pfad ist

    for(int i = 0; i < argc; i++) {
        printf("Argument %d ist: %s\n", i, argv[i]);
    }
    return 0;
}
```

Die Argumente werden als String eingelesen und müssen noch geparst werden. Hierzu gibt es schon funktionen:

1. atoi() für string to intiger
2. atol() für string to long
3. atof() für string to double

## Variadic Functions

Dies sind Funktionen, welche beliebig viele Übergabewerte annehmen. Dies erinnert an die Argumenten der `main()` und funktioniert auch Ähnlich.

Notwendig sind dafür macros aus `<stdarg.h>`.

```
#include <stdio.h>
#inlcude <stdarg.h>

int calcSum(int count, ...) {
    va_list args;
    va_start(args, count);  // Deklarieren von den Argumenten

    // Zugriff auf das erste Element
    int value = va_arg(args, 0);

    // Beenden der Argumente
    va_end(args);
}
```

# Aufgabe

Implementiere die Eingabe von bis 5 Zahlen, von dennen mehrere Summen gebildet werden müssen.

Diese Summen sind: 

- Gesammte Summe, 
- ungerade IDs und 
- gerade IDs