# File Handling

Wir können in C Dateien öffnen, diese Lesen, Bearbeiten oder Überschreiben.

Grundsätlich sind `FILE *` ein Pointer, welche auf die Datei zeigt. mit `fopen()` können wir eine Datei öffnen und dies mit gewissen Rechten.

```
FILE * stream;
stream = fopen("text.txt", "r+");

char string[100];

// Gängiger read file loop
while(!feof(stream)) {
    if(fscanf(stream, "%s", string))
        // Do something
}

fclose(stream);
```

## Rechte

Grundsätlich gibt es `r, w, a` read, write, append.

1. Read
   - Hier Wird die Datei nur geöffnet
2. Write
   - Erstellt eine Datei zum beschreiben
   - Wenn sie existert werden ihre Daten gelöscht.
3. Append
   - Schreibt nur ans Ende der Datei
   - Diese wird erstellt, falls keine eistierte

Zusätlich gibt es noch das Suffix `+` was somit lesen und schreiben ermöglicht.

Es gibt auch das Suffix `b` für Binary Dateien.

Es kann ein Präfix mit einem oder beiden Suffixen verbunden werden.

## Read

Die Funktion `fread()` kann eine Liste an `n` Argumenten einlesen und diese in `buffer` schreiben.

```
int buffer[n];

fread(buffer, sizeof(buffer[0]), n, stream);
```

Der Rückgabewert ist die Anzahl an eingelesenen Werte.

## Write

Die Funktion `fwrite()` kann eine Liste an `n` Argumenten in die Datei schreiben.

```
int written = fwrite(list, sizeof(list[0]), n, stream);
```

`fwrite` gibt die Anzahl an gelungen beschreibungen zurück.

## Put

Schreibt einen String an das Ende der Datei

```
int written = fputs("Hello World", stream);
```

# Aufgabe

Lese ein gemischtes Array ein und sortiere dies.

Das Sortierte Array soll unter die vorhandene Datei geschrieben werden.

Dies soll für zwei Dateien gemacht werden:

1. Für Binare Daten `.dat`
2. Für eine Text Datei `.txt`