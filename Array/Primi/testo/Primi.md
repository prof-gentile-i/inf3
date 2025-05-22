# Numeri Primi
Il seguente esercizio è diviso in varie parti. Per ogni parte realizzare un'analisi testuale e un sorgente separate.

## Parte 1
Dato un numero intero positivo `num` letto da tastiera, stabilire se è un numero primo. Si ricorda che un numero primo è un numero che è divisibile solo per se stesso e per `1`. Dunque, per verificare se un numero è primo bisogna che a partire da `2` fino ad arrivare al numero che precede `num` non ci siano divisori di `num`.
Volendo ottimizzare ci si può fermare alla radice quadrata di `num` in quanto se `num` è divisibile per un numero `d` vuol dire che `num = q * d`, ora al crescere di `d` a un cerro punto arriviamo all'apporissimazione intera di `sqrt(num)` mentre `q` parallelamente descresce e quindi visto che
`num = sqrt(num)*sqrt(num)` è inultile andare oltre `sqrt(num)` perché si otterebbero coppie quoziente e divisore già ottenute.

## Parte 2
Dato un numero `n` letto da tastira, creare un array di dimensione `n` che riporta tutti i numeri primi minori o uguali `n`. Notiamo che tipicamente l'array è sovradimensionato perché i numeri primi di solito sono in numero minore di `n`, dunque memorizzare la dimensione effettiva dell'array.

