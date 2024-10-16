# Numero di Parole
Dato un file testo, creare un programma che calcoli e stampi il numero di parole in esso contenute.
L'esercizio è diviso in varie parti. Far eun file Cpp che risolve le varie parti.
Esempio 

- `NumeroParole01.cpp` risolve la prima parte.
- `NumeroParole02.cpp` risolve la seconda parte.
- etc.



## Prima parte
Per "parola" si intende una stringa che uno spazio **dopo** di essa.

Se condideriamo il file `Esempio1.txt` il programma deve restituire `3` (perché `3P.` non ha uno spazio dopo ma la fine del file).

Considerare il caso come nel file `Esempio2.txt` che il file contenga solo spazi, in tal caso il programma deve  restituire ovviamente `0`. 

Se condideriamo il file `Esempio3.txt` il programma deve restituire `5` (perché dopo `3P` non c'è uno spazio ma un Invio e dopo `funzioni.` non c'è uno spazio ma la fine del file).


## Seconda parte

Considerare, inoltre, i seguenti casi particolari:
- Una parola che non ha spazi dopo perché è l'unica del file o perche è l'ultima del file deve essere conteggiata nel computo totale. Ad esempio, se condideriamo il file `Esempio1.txt` il programma deve restituire 4 (perché `3P.` va conseiderata in quanto è l'ultima del file).

- Una parola che non ha spazi perché è l'utlima di una riga deve essere conteggiata nel computo totale, come nel caso di `Esempio3.txt` che deve contare anche la parola `3P` e quindi il numero di parole è pari a `7`.

- Se ci sono solo righe vuote ovvero righe con spazi e/o TAB come nel file `Esempio4.txt`deve restituire `0`

## Terza Parte
Calcolare la parola di lunghezza massima del testo. Ad esempio nel file `Esempio3.txt` deve restituire  `9` perché la parola più lunga è `funzioni.` (quindi viene conteggiato anche il punto finale). 

## Quarta parte
Nel calcolare la parola di lunghezza massima non considerare i caratteri di punteggiatura finali delle parole (esempio `Ciao.` deve essere conteggiata come parola di 4 caratteri e non 5 perché il punto non va considerato). I caratteri di punteggiatura sono tutti quelli diversi dalle lettere alfabetiche.

## Quinta parte
**Non** considerare le parole fatte da sole cifre oppure da cifre con punti o virgole (esempio `1492` oppure `3.14` o ancora `12,800.73`).
