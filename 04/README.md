# Sorting

Es gibt verschieden möglichkeiten Arrays zu sortieren, wir haben nur Arrays mit Zahlen sortiert.

# Aufgabe

Erstelle Pseudocode für die Sortieralgorithmen

1. Mergesort
2. Quicksort
3. Insertionsort

Und Implementiere Quicksort.

## Mergesort

Sortiert die kleinsten Sublisten und Merge diese Sortieten Sublisten, bis diese Die vollständige Liste sind.

```
    merge(sorted1, sorted2) {
        combined

        while(sorted1 && sorted2 not empty)
            combined[x] = biggest(sorted1, sorted2);
            remove the biggest/first from sorted1/2
            x++
        
        combined + rest(sorted1)
        combined + rest(sorted2)
    }

    mergeSort {
        left, right

        sorted1 = mergeSort(left)
        sorted2 = (right)
        merge(sorted1, sorted2)
    }
```

## Quicksort

Wir wählen den Pivot als das Ende der Liste und bauen zwei hälften:

1. Kleiner als Pivot
2. Größer als Pivot

Diese werden zusammengebaut `1. + Pivot + 2.`

```
    partition(left, right) {
        pivot = [right];
        i = left;

        while(j < right) {
            wenn [j] <= pivot, dann
                tausche werte von j und i
                i++
        }

        insert pivot into middle
        return index of middle
    }

    quickSort(left, right) {
        wenn left > right
            middle = partition(left, right)
            
            quickSort(left, middle -1)
            quickSort(middle + 1, right)
    }
```

## Insertionsort

Sortiert die Liste eins zur Zeit. Somit nimmt es den nächsten Wert und packt ihn nach links der Linke Wert kleiner ist.

```
    insertionSort(n) {
        für alle i < n {
            Speicher den Wert von [i]
            j = i - 1
            while([j] > Wert)
                Dupliziere j nach j + 1
                j--
            Schreibe Wert an die Stelle j
        }
    }
```