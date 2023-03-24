// Ordinamento a bolle
// Si aspetta che nella stessa directory del sorgente ci sia un file testo di nome
// array.txt con primo valore la dimensione e poi tutti gli elementi. Esempio
// 5
// 27 17 3 2 15

#include <iostream>
#include <fstream>

using namespace std;
int main(){
    const int MAX=5;
    int v[MAX], i=0;
    ifstream in("array.txt");
    int n, s;
    in>>n;

    // Lettura dell'array
    for(i=0; i<n; i++){
        in>>v[i];
    }

    // Stampa dell'array
    cout<<"v= [";
    for(i=0; i<n-1; i++){
        cout<<v[i]<<", ";
    }
    cout<<v[n-1]<<"]";

    // Ordinamento per bolle

    for (int i=0; i<n-1; i++){ // Numero di passate da fare (n-1)
        bool almenoUnoScambio = false; // Vede se l'array è già ordinato
        
        // Passate 
        // Devo partire da 0 fino n-i-2, quindi minore di n-i-1), perché avendo un v[j+1] nel ciclo
        // devo fermarmi al penultimo elemento del sotto array da considerare.
        // La formula n-i-1 viene fuori da
        // Per i = 0 il sottoarray da considerare va da 0 a n-i-1 = n-1
        // Per i = 1 il sottoarray da considerare va da 0 a n-i-1 = n-2
        // etc.
        for (int j=0; j< n-i-1; j++){
            if(v[j+1] < v[j]) {
                // Scambio
                s = v[j+1];
                v[j+1] = v[j];
                v[j] = s;
                almenoUnoScambio = true;
            }
        }

        if (!almenoUnoScambio) // Se l'array non ha fatto neanche uno scambio esce dal codice
            break;
    }

    cout<<endl<<"Array ordinato:"<<endl;
    cout<<"v= [";
    for(i=0; i<n-1; i++){
        cout<<v[i]<<", ";
    }
    cout<<v[n-1]<<"]";
}
