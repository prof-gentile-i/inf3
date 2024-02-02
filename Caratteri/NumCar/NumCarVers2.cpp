/* Calcolare e stampare il numero di caratteri di un testo dato in input (EOF escluso) */
// Versione 2: e una versionre ridotta che usa il for in luogo del while
// Autore: Ivan Gentile
#include<iostream>

using namespace std;

int main() {
	
	int nc; // Carattere o EOF, per testi lunghi può esssre un long o un double 
	
	cout << "CALCOLO DEL NUMERO DI CARATTERI\n";
	cout << "Inserisci un testo a piacere, per terminare Invio e CTRL+Z (Win) o CTRL+D (Mac/Unix)\n";	

	for(nc = 0; cin.get() !=EOF; ++nc) 	
		;
	
	cout << "Il numero di carattteri immessi e': " << nc; // Se non si vuole considerare l'ultimo Invio stamapre nc-- 
	
	return 0;
}
