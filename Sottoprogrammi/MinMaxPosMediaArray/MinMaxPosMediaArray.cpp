// Calcolo del minimo, massimo e rispettive ULTIME posizioni e la media di un array di voti
#include <iostream>

// Prototipi (dichirazioni)
void letturaArray(int a[], int dim);
void stampaArray(int x[], int d);
int minAndPos(int v[], int n,  int &pos);
int maxAndPos(int v[], int n,  int &pos);
float media(int v[], int n);

int main() {
    int n; // dimensione array
    std::cout << "Dimensione array n = ";
    std::cin >> n;
    int v[n];

    // Lettura array di voti
    letturaArray(v, n);

    // Stampa array
    stampaArray(v, n);

    // Calcolo minimo e posizione

    int posMinimo;
    int minimo;
    minimo = minAndPos(v, n, posMinimo);
    std::cout << "Minimo: " << minimo << ", posizione: " << posMinimo+1 << std::endl;
    
    int posMassimo;
    int massimo;
    massimo = maxAndPos(v, n, posMassimo);
    std::cout << "Massimo: " << massimo << ", posizione: " << posMassimo+1 << std::endl;

    std::cout << "Media: " << media(v,n) <<std::endl;

}

// DEFINIZIONI DELLE FUNZIONI
// Sottopgramma di lettura array
void letturaArray(int a[], int dim) {
    for(int i = 0; i < dim; i++) {
        std::cout <<"voto " << i + 1 << ": ";
        std::cin >> a[i];
    }
}
// Sottoprogramma di stampa array
void stampaArray(int x[], int d) {
    std::cout << "v = [";
    for(int i = 0; i < d-1; i++) {
        std::cout <<x[i] << ", ";
    }
    std::cout << x[d-1] << "]" <<std::endl;
}

//Sottoprogramma del minimo e della posizione
// valori restituiti: minimo 
// parametro di output: pos
int minAndPos(int v[], int n,  int &pos) {
    int minimo = v[0];
    pos = 0;
    for(int i = 1; i < n; i++) {
        if (v[i] < minimo) {
            minimo = v[i];
            pos = i;
        }
    }
    return minimo;
}

//Sottoprogramma del massimo e della posizione
// valori restituiti: massimo 
// parametro di output: pos
int maxAndPos(int v[], int n,  int &pos) {
    int massimo = v[0];
    pos = 0;
    for(int i = 1; i < n; i++) {
        if (v[i] > massimo) {
            massimo = v[i];
            pos = i;
        }
    }
    return massimo;
}


float media(int v[], int n) {
    int somma = 0;
    for(int i = 0; i < n; i++) {
        somma = somma + v[i];
    }
    return ((float)somma) / n;

}