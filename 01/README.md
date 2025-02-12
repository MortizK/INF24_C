# Grundlagen

## GNU Compiler Collection

Was sind:

    Pre-Processor
    Compiler
    Linker
    Runtime Environment
    Loader
    Debugger

Es gibt den ASCII Table, welcher der Standard für chars ist.

## Variables

Eine Variable besteht aus 4 Parts:

1. name
2. data type
3. variable
4. address

Es gibt verschieden Datentypen, die eine Variable annehmen kann.

- numeric
  - char (1 Byte)
  - short (2 Byte)
  - int (4 Byte)
  - long (4 oder 8 Byte)
  - float (4 Byte)
  - double (8 Byte)
- derived
  - struct
  - union
  - enum
  - pointer
  - arrays
  - string

### Floating Numbers

Sie bestehen aus: Vorzeichen bit, Exponenten (8 Bit für float, 11 Bit für double), Mantisse

Der Wert lässt sich so bestimmen:

$$
value=(-1)^{sign}*(1+mantisse)*2^{exponent - BIAS}
$$

Der ``BIAS`` ist fest: float 127, double 1023

### Konstanten

Es gibt verschieden Arten von Konstanten

    #define PI 3.1415926;

    float pi = 3.1415926;

Dies funktionieren unterschieldich. Bei `#define PI` wird beim Compilen eine Textersetzung durchgefürht.

Ein `enum` ist eine Array an Intiger Konstanten. Sie dient der Lesbarkeit.

    enum Days {
        SUNDAY,     // 0
        MONDAY,     // 1
        TUESDAY,    // 2
        //...
    }

### Operatoren

Verschieden Operatoren haben eine unterschiedliche Reihenfolge der Ausführung, genau so wie unser * vor +.

So gibt es Gruppen:

 1. () [] -> .
 2. ! ~ ++ -- *(Pointer) &(Address) sizeof
 3. \* / %
 4. \+ -
 5. << >> Bitshift
 6. < > <= =>
 7. != ==
 8. & Bit UND
 9. ^ Bit XOR
 10. | Bit ODER
 11. && Logisch UND
 12. || Logisch ODER
 13. ? : "Inline if"
 14. = += -= *= /= %= &= ^= |= <<= >>= Zuweisungen

## Aufgabe

Einfache Übunen zu Input/ Output mit:

    printf();   // Ausgabe

    scanf();    // Eingabe