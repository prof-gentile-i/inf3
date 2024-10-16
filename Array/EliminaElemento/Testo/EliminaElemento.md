# Elimina Elemento da un array
Svolgere il seguente esercizio. Ogni parte deve essere un file sorgente separato e ogni parte richiede preliminarmente un'analisi scritta in un file testo.

## Prima parte
Dato un array di numeri interi non negativi (>=0) **tutti diversi tra loro** letti da tastiera, leggere un altro valore `val` e se questo è presente nell'array eliminarlo da esso, ovvero compattare l'array mettendo in coda il valore `-1`

Esempio se l'array è

    v = [2, 6, 8, 15, 4, 7]

e il valore `val` è pari a `8`, l'array deve diventare il seguente

    v = [2, 6, 15, 4, 7, -1]

## Seconda parte
Supporre che l'array e il valore siano non letti da tastieri ma presenti in un file testo di nome `array.txt`. In particolare il file testo deve essere fatto in questo

- Nella prima riga c'è la dimensione dell'array
- Nella seconda riga gli elementi dell'array separati da spazi
- Nella terza il valore da eliminare

Esempio 

    6
    2 6 8 15 4 7
    8

in tal caso `6` è la dimensione dell'array, la seconda riga come detto sono gli elementi dell'array e `8` è il valore da eliminare.

## Terza Parte
A partire dalla seconda parte (quindi array ed elemento da cancellare letto da file) considerare il caso in cui l'array possa avere **elementi ripetuti**, pertanto se è chiesto di eliminare un elmento ripetuto bisogna avere più valori `-1` in coda. Ad esempio
se l'array è 

    v = [2, 6, 4, 4, 7, 9, 3]

e il valore `val` da eliminare è `4` l'array compattato deve essere

    v = [2, 6, 7, 9, 3, -1, -1]


