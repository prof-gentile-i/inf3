# Analisi dell'esercizio sulla Moda di un array

L'esercizio può essere svolto in vari modi, ne vedremo due. Il primo è più semplice ma può richiedere molta occupazione di memoria.

## Primo metodo: creare un array con tutti i possibili valori
Se conosciamo tutti i possibili valori dell'array possiamo costruire un array di dimensione il massimo possibile valore e mettere in ogni posizione la sua frequenza.

Esempio supponiamo che i possibili valori dell'array siano tra `1` e `10` e che l'array diciamolo `v` sia

         0, 1, 2, 3, 4, 5, 6, 7,  8, 9, 10, 11, 12
    v = [2, 8, 1, 9, 8, 5, 5, 10, 9, 7, 7,  6,  3]

Essendo il massimo valore di `v` pari a `10` costruiamo un array di `11` eleementi in modo da avere le posizioni da `0` a `10`. Questo array che chiamiamo `f` ha nella generica posizione `i` conterrà la frequenza del valore `i`, ad esempio nella posizione `7` conterrà la frequenza (in `v`) del valore `7`. Inizialmente `f` deve avere tutti valori `0`

         0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    f = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

Ora bisogna scorrere `v` con un ciclo definito, diciamo `i` il suo indice, e per ogni suo valore calcolare la sua frequenza (per farlo ci vuole un ciclo innestato che spazzola tutto `v`). Ad esempio inizialmente il primo valore di `v` è `2` che ha frequenza 1, dunque in `f` di `2` metteremo `1`

         0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    f = [0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0]

poi al secondo valore di `i` (`i = 1`) abbiamo che `v[1]=8` e la frequenza di `8` è `2` dunque in `f[8]` metteremo `2`

         0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    f = [0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0]

e così via alla fine l'array `f` è 

         0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    f = [0, 1, 1, 1, 0, 2, 1, 2, 2, 2, 1]

A questo punto mi calcolo il valore massimo di `f` e ogni volta che nel nostro caso è `2` e ogni volta che trovo il `2` trovo un valore di moda, nel nostro caso il `2` lo troviamo in posizione `5`, `7`, `8`, `9` dunque i valori di moda sono appunto `5`, `7`, `8`, `9`.

Osservazioni e domande:
- La posizione `0` di `f` non è sfruttata perché i valori di `v` vanno da `1` a `10`, quesrto spreco di una sola variaible ci consente però di far si che la `i`-esima posizione di `f` è proprio la frequenza del numero `i`.
- Se i possibili valori di `v` possono essere anche negativi, si può applicare ancora la soluzione proposta? 

## Secondo metodo: utilizzo passo passo di più array

A partire dall'array `v` di valori di cui vogliamo calcolare la frequenza, esempio

         0, 1, 2, 3, 4, 5, 6
    v = [2, 8, 1, 9, 8, 5, 5]

ci costruiamo un array `f` di **stessa** dimensione di `v` in cui il generico elemento `f[i]` è la frequenza di `v[i]`. Nel nostro esempio

         0, 1, 2, 3, 4, 5, 6
    f = [1, 2, 1, 1, 2, 2, 2]

infatti guardando `v` 
- il valore `2` è presente in `v` con una frequenza pari a `1`
- il valore `8` è presente in `v` con una frequenza pari a `2`
- il valore `1` è presente in `v` con una frequenza pari a `1`
- il valore `9` è presente in `v` con una frequenza pari a `1`
- il valore `8` è presente in `v` con una frequenza pari a `2`
- il valore `5` è presente in `v` con una frequenza pari a `2`
- il valore `5` è presente in `v` con una frequenza pari a `2`

Se calcoliamo il massimo di `f` otteniamo la frequenza massima, diciamolo `f_max` nel nostro caso è `2` dunque tutti i valori di `v` che hanno frequenza `2` sono la moda. Per calcolare `f_max` bisogna fare un ciclo definito su `f`.

Una volta calcolato `f_max` dobbiamo riscorrere `f` con un altro ciclo e  ogni volta che un suo valore è pari `f_max` prendiamo il corrispondente valore di `v` e lo stampiamo, nel nostro caso il valore `f_max` è presente in 
- in posizione `1` dunque `v[1]` c'è un valore moda ovvero `8`,
- in posizione `4` dunque `v[4]` c'è un valore moda ovvero `8`,
- in posizione `5` dunque `v[5]` c'è un valore moda ovvero `5`,
- in posizione `6` dunque `v[6]` c'è un valore moda ovvero `5`

Il problema di questa soluzione è che stampa dei valori ripetuti: stampa  `f_max` volte i valori della moda (esempio `8` e `5` sono stampati `2` volte ognuno).

Se vogliamo evitare questo problema possiamo creare un nuovo array in cui mettiamo i valori di moda (dunque non li stampiamo direttamente) ma **senza ripetizioni** nel nostro caso un array di questo tipo

            0, 1, 2, 3, 4, 5, 6
    mode = [8, 5, -, -, -, -, -]

questo array di nome `mode` ha dimensione massima quella `v` (e di `f`) ma dimensione effettiva che bisogna calcolare in base al numero di valori di mode (nel nostro dimensione effettiva è `2` perché i valori di moda sono `8` e `5`). 
Infine si stampa il vettore `mode` che per come è costruito non ha ripetizioni

