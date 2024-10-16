# Parte 1- Analisi

Si legge l'array da tastiera cifra per cifra (eventualmente ci ci assicura che il numero intero letto sia tra 1 e 9 in caso contrario chiediamo la ripetizione).

Successivamente bisogna scorrere l'array ma utilizzando 2 indici uno i che parte dalla prima posizione (0) e l'altro j che parte dall'ultima posizione (n-1, con n dimensione dell'array).

In ogni iterazione del ciclo i sarà incrementato e j sarà decrementato. Si tratta a quel punto di verificare se gli elementi di posto i e j sono uguali tra loro

    v[i] == v[j]

Nel momento in cui trovo una sola disuguaglianza esco dal ciclo stampando che il numermo NON è palindromo, viceversa se trovo sempre ugaglianze il numero è palindromo.

Tale condizione è gestita con una variabile boolena che chiamiamo `palindroma`, che è inizialmente mettiamo a `true` e poi nel momento in cui trova una disuguaglianza viene impostata a `false`

Il ciclo deve terminare **quando `i` supera `j`**