# Shift di un array
Il seguente esercizio è diviso in varie parti. Per ogni parte realizzare un'analisi testuale e un sorgente separate.

## Parte 1
Dato un array `v` di dimensione `n`, con `n` letta in input da tastiera oppure è generata casualmente e deve essere un numero (intero) compreso tra `1` e `9`. Riempire l'array con **numeri casuali interi compresi tra `0` e `99`**.


Si vuole effettuare lo shift **a destra** dell'array ovvero creare un nuovo array `v2` che ha gli stessi elementi di `v` ma spostati in avanti di una posizione. L'ultimo elmento di `v` viene perso, mentre l'elemento in prima posizione di `v2` deve essere zero. Esempio

    v  = [7, 10, 8]
    v2 = [0, 7, 10]

Stampare alla fine gli array `v`, `v2`.

# Parte 2
Riptere la parte 1 facendo lo shift sullo stesso array `v` ovvero non creare un nuovo array `v2`, dunque se all'inizio `v` è 
    
	v  = [7, 10, 8]

alla fine deve essere

    v = [0, 7, 10]


# Parte 3
Realizzare la stessa struttura della parte 2 ma effettuando lo shift a sinistra (dunque si perde il primo elemento dell'array originario e si inserisce in coda il valore zero), esempio se all'inizio `v` è 
    
	v  = [7, 10, 8]

alla fine deve essere

    v = [10, 8, 0]


# Parte 4
Dopo aver acquisito l'array `v` da tastiera, realizzare e visualizzare un menù testuale che prevede la scelta dell'utente di quale operazione fare shift (destro o sinistro) e del **valore da inserire al posto di quello eliminato**. Esempio il menù si presenta in questo modo

	SHIFT ARRAY
	1- Shift Destro (right shit)
	2- Shift Sinistro (left shift)
	3 - Esci
	
	Fai la tua scelta e indica il valore da inserire: 

dove per esempio scrivendo `1 7` signfica che fa uno shift a destra e inserisce `7` in testa, mentre scrivendo `2 7` fa uno shift a sinitra e inserisce `7` in coda.

Nel caso l'utente sceglie `3` non deve inserire ovviamente alcun altro valore e il programma termina, negli altri casi il programma riporpone il menu per fare altre operazioni.

Nel caso in cui l'utente digita un valore diverso da `1`, `2`, o `3` il programma segnala che la scelta è inesistente e ripropone il menù. 
