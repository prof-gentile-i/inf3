#include <iostream>

using namespace std;
int main() {

    const int val = 3; // Valore da controllare
    int doppio = val * 2;

    int n; // Numero di numeri
    cout << "Quanti numeri vuoi inserire? ";
    cin >>n;

    int frequenza = 0;

    int numero;
    for (int i = 1; i <= n; i++) { // i = i +1
        cout << "Insisci l'" << i << "-esimo numero: ";
        cin>> numero;

        if (numero == doppio) {
            frequenza++;
        }
    }

    float percentuale;
    percentuale = ((float)frequenza / n) * 100;

    cout << "La percentuale di frequenza del doppio del numero " << val << " e': "<<percentuale << "%";

}
