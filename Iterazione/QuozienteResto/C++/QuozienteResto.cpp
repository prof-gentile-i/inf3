#include <iostream>
using namespace std;

int main( ) {
	int dividendo, divisore; // Numeri interi non negativi
	int quoziente =0 , resto;
	int i; /* Indice di ciclo */

	cout << "QUOZIENTE E RESTO SENZA USARE / e %\n";

	cout << "Inserisci il dididendo (intero) e premi Invio: ";
	cin >> dividendo;
	cout << "Inserisci il divisore (intero) e premi Invio: ";
	cin >> divisore;


	/* Calcolo della divisione */
	if (!dividendo && !divisore ) {
		cout << "Divisione indeterminata 0/0" << endl;
		return 0;
	}
	if (!divisore ) {
		cout << "Divisione impossibile (divisore nullo)" << endl;
		return 0;
	}

    while (dividendo >= divisore) {
        quoziente++;
        dividendo -= divisore;
    }
    if (!dividendo)
        resto = divisore;
    else
        resto = dividendo;

    cout << "Quoziente: " << quoziente << ", Resto: " << resto;
}


