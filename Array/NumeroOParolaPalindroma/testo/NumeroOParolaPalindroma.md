# Numero o Parola Palindroma
Un numero palindromo è un numero che rappresenta la stessa quanttà sia se letto da sinistra a destra che da destra a sinista, ad esempio

    131
    1221

Analgoamente una paraola palindroma è una parola che è la stessa sia quando la leggiamo da sinistra a destra che da destra a sinistra, come

    anna
    radar
    otto
    ossesso

Risolvere l'esercizio creando un file sorgente e un'analisi per ogni parte.

## Parte 1
Dato un array letto da tastiera di cifre (ogni cifra è un numero da `1` a `9`) verificare se il numero costituisto da tutte le cifre dell'array è palindromo. Leggere preliminarlmente (sempre da tastiera) la dimensione dell'array.

Esempio se abbiamo un array di `4` elementi fatto dalla seguenti cifre

    v = [1, 3, 3, 1]

l'array costituisce un numero palindromo.

## Parte 2
Il problema è lo stesso della parte 1 ma leggere la dimensione dell'arry e gli elementi che lo costituiscono da un file testo di nome `array.txt`. Il file nella prima riga ha la dimensione dell'array e nella seconda gli elementi separati da spazi. Con rifermento all'esempio della parte 1 il file sarà fatto in questo modo

    4
    1 3 3 1

## Parte 3
Il problema è lo stesso della parte 2 ma il programma deve verificare se una parola (intesa come sequenza di caratteri) è palindroma. I caratteri della parola da verificare sono posti nella seconda riga di un file testo di nome  `array_parola.txt` senza essere separati da spazi. Ad esempio il file può essere di questo tipo

    5
    radar






