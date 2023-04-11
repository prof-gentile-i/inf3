// Calcola un'espressione artimetica passata come stringa sulla console
// Esempio scrivo un'unica riga: 3 + 7 
// e restituisce 10
// Le operazioni consentite sono +, *, -, /
// Salta tutti i caratteri vuoti (spazi, tab e newline)
// Salta tutti i caratteri che non sono cifre 0, 1, .., 9
// Esempio 4.1/2 restiuisce 20 perché fa 41/2 che divisione intera da 20
// Se trova più operatori considera il primo: es. 2+*3 da 5
// Se non trova nessun operatore aritmetico oppure 
// non risce a costruire operando 1 o 2 termina con errore

#include <iostream>

int main() {

    const int MAX_DIM = 50;
    char s[MAX_DIM];

    int num1 = 0, num2 = 0; // Operando
    char operazione; // vale '+', '-', '*' o '/'

    std::cout << "Inserisci un espressione del tipo a + b"<<std::endl;
    std::cin.getline(s, MAX_DIM-1);

    int i = 0;
    bool num1a = false; // vale true se riesco ad acquisire num1
    bool operatoreTrovato = false; // vale true se trovo un operando arimetico
    while(!operatoreTrovato && s[i] !=NULL) {
        if(s[i] ==' ' or s[i]=='\t' or s[i] == '\n') { // Salta gli spazi
            i++;
            continue;
        }
        if(s[i] >='0' and s[i] <='9') {// Cifra trovata
            num1 = num1 * 10 + (s[i] - '0'); // trasforma i caratteri in interi
            i++;
            num1a = true; // almento una cifra trovata num1 acquisito
            continue;
        }
        switch (s[i]) {
        case '+':
            operazione ='+';
            operatoreTrovato = true;
            break;
        case '*':
            operazione ='*';
            operatoreTrovato = true;
            break;
        case '-':
            operazione = '-';
            operatoreTrovato = true;
            break;
        case '/':
            operazione = '/';
            operatoreTrovato = true;
            break;
        }
        i++;

    }
    if (!num1a or !operatoreTrovato) {
        std::cout << "Primo operando assente o assente l'operatore";
        return -1;
    }

    bool num2a = false;
    while(s[i] != NULL) {
        if(s[i] ==' ' or s[i]=='\t' or s[i] == '\n') {
            i++;
            continue;
        }
        if(s[i] >='0' and s[i] <='9') {
            num2 = num2 * 10 + (s[i] - '0');
            i++;
            num2a = true;
            continue;
        }
        i++;
    }
    if (!num2a ) {
        std::cout << "Secondo operando assente";
        return -1;
    }

    int risultato;
    switch(operazione){
    case '+':
        risultato = num1 + num2;
        break;
    case '*':
        risultato = num1 * num2;
        break;
    case '-':
        risultato = num1 - num2;
        break;
    case '/':
        risultato = num1 / num2;
        break;
    }

    std::cout << num1 << operazione << num2 << "=" << risultato;


}
