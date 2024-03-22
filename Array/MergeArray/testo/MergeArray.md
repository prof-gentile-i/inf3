# Merge tra due array
Il seguente esercizio è diviso in varie parti. Per ogni parte realizzare un'analisi testuale e un sorgente separate.

## Parte 1
Dati due array di array `v1` e `v2` di stessa dimensione `n`.
La dimensione `n` è letta in input da tastiera oppure è generata casualmente e deve essere un numero (intero) compreso tra `1` e `9`. Mentre gli elementi degli array **sono numeri casuali interi compresi tra `0` e `99`**.

Si vuole creare un nuovo array `v3` che la **fusione (merge)** tra `v1` e `v2`. Per fusione si intende che ha gli elementi alternati di `v1` e `v2`, ad esempio se

    v1 = [7, 10, 8]
    v2 = [33, 0, 47]

si deve avere

    v3 = [7, 33, 10, 0, 8, 47]

Stampare alla fine gli array `v1`, `v2`, `v3`.

# Parte 2
Supporre che le dimensioni dei due array `v1`, `v2` non siano necessariamente uguali tra loro. Nel caso in cui non lo sono finito l'array con dimensione minore l'array di merge viene riempito con i restanti elementi dell'array di dimensione maggiore.

Ad esempio, se

    v1 = [7, 10, 8]
    v2 = [33, 0, 47, 13, 40, 33]

si ha

    v3 = [7, 33, 10, 0, 8, 47, 13, 40, 33]
