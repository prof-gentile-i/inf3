#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL)); // Inizializza il seme in maniera casuale

    int n;
    std::cout << "Ins. numero val. dell'array n = ";
    std::cin >> n;
    int v[n];

    const int MAX_VAL = 10;

    // Popolamento array
    for(int i = 0; i < n; i++) {
        v[i] = (rand() % MAX_VAL) + 1; // genera un casuale tra 1 e MAX_VAL
        /*
        std::cout << "Ins. valore di posizione " << i <<": ";
        std::cin >> v[i];
        */
    }
    

    // Stampa array
    std::cout << "[";
    for(int i = 0; i < n-1; i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << v[n-1] << "]" << std::endl;

    // Calcolo dell'array delle frequenze
    int f[n]; // freq. di v
    for(int i = 0; i < n; i++) { // Analizza gli elementi uno alla volta

        int c = 0; // freq. di v[i]
        for(int j = 0; j < n; j++) { // Calcolare la freq. di v[i]
            if (v[i] == v[j]) {
                c++;
            }
        }
        f[i] = c;
    }

    // Stampa array
    std::cout << "Frequenze:\n";
    std::cout << "[";
    for(int i = 0; i < n-1; i++) {
        std::cout << f[i] << ", ";
    }
    std::cout << f[n-1] << "]";


    // Calcolo del massimo (e risp. pos.) dell'array f delle freq.
    int max_f = f[0];
    int pos_max_f = 0;
    for(int i = 1; i < n; i++) {
        if (f[i] > max_f) {
            max_f = f[i];
            pos_max_f = i;
        }
    }

    std::cout<< "\nIl valore di max. freq è " << v[pos_max_f] <<", e la sua freq. è " << max_f;


}