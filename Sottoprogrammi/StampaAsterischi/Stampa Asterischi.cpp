#include <iostream>

// Prototipo
// primo parametro: numero di asterischi da stampare
// secondo parametro: scelta della forma
// 1=riga, 2= colonna, 3 = diagonale, 4=quadrato, 5=triangolo rettangolo
bool stampaAsterischi(int, int); 


int main() {

int n, scelta;
std::cout << "STAMPA FORME DI ASTERISCHI\n";
std::cout << "Inserisci la dimensione N e la forma da stampare (es 4 1)\n";
std::cout << "1-Riga\n";
std::cout << "2-Colonna\n";
std::cout << "3-Diagonale (da in alto a sinistra a in basso a destra)\n";
std::cout << "4-Quadrato\n";
std::cout << "5-Triangolo rettangolo\n";
std::cin >>  n >> scelta;


if (stampaAsterischi(n, scelta) == false)
    std::cout << "Errore scelta non riconosciuta";

} // end main

bool stampaAsterischi(int n, int scelta) {
    switch(scelta) {
    case 1: // Riga
        for(int i =1; i <= n; i++)
            std::cout << "* ";
        break;
    case 2: //  Colonna
        for(int i =1; i <= n; i++)
            std::cout << "*" << std::endl;
        break;
    case 3: // Diagonale
        for(int i = 1; i <=n; i++) { // numero di asterischi (n)
            for(int j = 1; j <= i-1; j++) // stampa i-1 spazi
                std::cout << " ";
            std::cout << "*\n";
        }
        break;
    case 4: // Quadrato
        for(int i =1; i <= n; i++) std::cout <<"* "; // Prima Riga di *
        printf("\n");

        for(int i =1; i <= n-2; i++) { // Stampa le righe da 2 a n-1 (compresi)
            std::cout << "* ";
            for(int j = 1; j<= n-2; j++)
                std::cout << "  "; // 2 spazi
            std::cout << "*\n";
        }
        for(int i =1; i <= n; i++) std::cout << "* "; // Ultima Riga di *
        break;
    case 5: // Triangolo
        for(int i = 1; i <=n-1; i++) {// tutte righe tranne l'ultima
            if (i >1)
                std::cout << "* ";
            for(int j = 1; j <= i-2; j++) // n-2 spazi
                printf("  "); // 2 spazi
            printf("*\n");
        }
        for(int i =1; i <= n; i++) std::cout << "* "; // Riga di *
        break;
    default:
        return false;
        break;
    }
    return true;


}
