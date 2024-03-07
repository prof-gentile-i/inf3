# Parte 1 - Analisi
L'array viene letto elemento per elemento attraverso  un ciclo definito.
La dimensione dell'array è anch'essa letta preliminalmente in ingresso da tastiera. 

In seguito viene chiesto all'utente il valore `val` da ricercare.

In un ciclo definito che scorre tutto l'array si verifica se il generico elemento
dell'array, `v[i]` è uguale a `val`; in tal caso `v[i]` viene trascritto con `v[i+1]` cioè

    v[i] =v[i+1]

La formula precedente è ripetuta fino al penultimo elemento e poi si esce dal ciclo.

Usciti dal ciclo non resta altro che inserire in ultima posizione il valore sentinella -1, ovvero

    v[n-1] = -1

Per verificare la corretteza si stamperà l'array compattato.