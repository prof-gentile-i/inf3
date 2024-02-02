// Calcolare e stampare il numero di caratteri di un testo dato in input (EOF escluso)
// Versione 1
// Autore: Ivan Gentile
#include<iostream>

using namespace std;

int main() {
	int c;
	int nc = 0; /* Carattere o EOF, per testi lunghi può esssre un long o un double */

	cout << "CALCOLO DEL NUMERO DI CARATTERI\n";
	cout << "Inserisci un testo a piacere, per terminare Invio e CTRL+Z (Win) o CTRL+D (Mac/Unix)\n";

	while(cin.get()!=EOF)
	  ++nc;
	cout << "Il numero di caratteri immessi e': "<< nc << endl; // Se non si vuole considerare l'ultimo Invio stamapre nc--

//	system("pause");
	return 0;
}
