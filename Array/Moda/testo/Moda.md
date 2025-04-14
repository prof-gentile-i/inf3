# Moda di un array

## Parte 1
Dato un array di interi letto valore per valore dalla tastiera o generato casualmente per esempio con valori da 1 a 20 (la dimensione dell'array è comunque letta in input), si vuole calcolare la **moda**. La momda è il valore presente più volte ovvero con frequenza massima

Esempio se i valori sono:
`[10, 5 , 4, 2, 5, 7, 2, 5]`
la moda è `5` perché presente `3` volte, ovvero la sua _frequenza_ è `3`. 

Può capitare che ci siano più valori che rappresentano la moda, ad esempio nel seguente array
`[10, 5 , 2, 2, 5, 7, 2, 5]`
la moda è costituita da due valori `2` e `5` entrambi con frequenza `3`.

# Parte 2
Calcolare anche le
- la *prima* posizione del voto massimo
- la *prima* posizione del voto minimo

con riferimento all'esempio di prima la posizione del voto massimo è `4` (le posizioni partono da zero), mentre la prima posizione del voto minimo è `3` (le posizioni partono da zero).

## Parte 3
Legggere i voti da un file testo di nome `voti.txt` che contenga i voti separati da spazio o da invio cioè ad esempio
`3 6 4 2 8 7 8`


## Parte 4
Calcolare la media dei voti

## Parte 5
Calcolare il numero di materie insufficienti (voto minore di 6) e styampare uno dei seguenti messaggi
- `Ammmesso` se l'alunno ha tutti voti maggiori o uguali a `6`
- `Non ammesso` se insufficienze sono maggiori di `2`
- `Sospeso` se le insufficienze sono minori o uguali a `2` 