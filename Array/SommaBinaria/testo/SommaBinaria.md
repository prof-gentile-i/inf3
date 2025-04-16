# Somma Binaria
Il programma è diviso in varie parti. Realizzare un file testo di analisi e un file sorgente per ogni parte.

# Parte 1 - Lettura da Tastiera e dimensione fissa

Leggere due numeri binari a `4` bit una cifra alla volta (una cifra è quindi `0` o `1`) e memorizzarli in due array di nome `a1`, `a2`. Costruire un terzo array di nome `s` che è la somma dei due numeri binari. Stampare gli operandi e il risultato.

L'elemento di posizione `0` (il primo elemento) degli array è rappresenta il MSB (Bit più signficiativo) e di conseguenza l'ultimo, ovvero quello in posizione `3` rappresenta il LSB (Bit meno significativo).

Notiamo che in generale `s` può avere un bit signficiativo in più rispetto a `a1` e `a2`. 

Esempio se

    a1 = [1, 0, 0, 1]
    a2 = [1, 0, 1, 1]

si ha che 

    s = [1, 0, 1, 0, 0]


Per semplificare le cose costruire l'array `s` di stessa dimensione di `a1` e `a2`, l'eventuale bit significativo in più lo consideriamo come riporto e lo memorizziamo in una variabile `r`, quindi nell'esempio di prima diventa

    s = [0, 1, 0, 0], r = 1


A titolo di esempio riportiamo altri esempi di somma che possono essere utili in fase di test del programma

- Esempio 2
    
        a1 = [0, 0, 0, 1]
        a2 = [0, 1, 1, 0]
        s  = [0, 1, 1, 1], r = 0  
- Esempio 3
    
        a1 = [1, 1, 1, 1]
        a2 = [1, 1, 1, 1]
        s  = [1, 1, 1, 0], r = 1

# Parte 2 - Lettura da File e dimensione fissa
Riptere la parte 1, in cui però la lettura degli operandi è fatta da un file di nome `operandi.txt` in cui in ogni riga c'è un operando e le cifre sono separate da spazi, ad esempio se 

    a1 = [1, 0, 0, 1]
    a2 = [1, 0, 1, 1]

il file è fatto in questo modo

    1 0 0 1
    1 0 1 1

# Parte 3 - Lettura da File, da tastiera come stringa di caratteri o generazione casuale
Riptere l'esercizio della parte 1, in cui però la lettura degli array non è fatta cifra per cifra ma come una **stringa in cui viene letto carattere per carattere**. Ad esempio se 

    a1 = [1, 0, 0, 1]

l'utente non scrive da tastira una cifra alla volta ma scrive tutto il numero 

    1001

e dopo l'invio il computer acquisisce i caratteri uno alla volta e li memorizza come cifre numeriche nell'array `a1` (infatti ricordiamo che per esempio il carattere `1` è diveso dal numero `1`)

Inoltre prevedere che all'inizio il programma preveda la scelta se leggere i numeri da sommare da tastiera, da file oppure vengono genrati casualmente (in quest'ultimo caso generare una cifra alla volta come numero intero). Nel caso in cui la scelta è la lettura da file prevedere che il file si chiami `operandi.txt` e che gli operandi sono memorizzati uno per riga **senza spazi tra le cifre** (quindi leggerli carattere per carattere), ad esempio

    1001
    1011

# Parte 4 - Operandi a lunghezza non prestabilita
Ripetere la parte 4, prevedendo però che la lunghezza degli operandi non sia fissa a `4` bit e non sia necessariamente la stessa tra gli operandi (ad esempio `a1` è  `5` bit mentre `a2` è a `3` bit). Il numero di bit degli operandi `a1`, `a2` non deve essere data a priori ma deve essere dedotta dagli operandi stessi, precisamente

- Nel caso di lettura delle cifre dalla tastiera l'acquisizione dell'operando termina quando inseriamo come cifra un valore negativo
- Nel caso di lettura da file le cifre terminano quando abbiamo uno spazio, un invio o un fine file.
- Nel caso generazione casuale il numero di cifre è anch'esso un numero casuale compreso tra `1` e `10` (numero che può essere diverso per i due operandi)


Prevedere inoltre che l'array somma contenga tutte le sue cifre e quindi che il riporto non sia memorizzato nella variaible `r` ma sia la prima posizione dell'array `s` (dunque `s` ha una dimensione maggiore di 1 rispetto al massimo della dimensione degli operandi)