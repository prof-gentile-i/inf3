#include <iostream>


using namespace std;



int main() {
    int num, dividendo, divisore, quoziente, resto;


    cout << "Inserisci il numero intero in base 10: ";
    cin >> num;
    dividendo = num;

    cout << "In quale base lo vuoi convertire?\n";
    cout << "2 - Binario\n";
    cout << "8 - Ottale\n";
    cout << "16 - Esadecimale\n";
    int scelta;
    cout << "Fai la tua scelta: ";
    cin>>scelta;

    switch(scelta) {
    case 2:
        divisore = 2;
        break;
    case 8:
        divisore = 8;
        break;
    case 16:
        divisore = 16;
        break;
    default:
        cout << "Errore: scelta non ammissibile";
        return 1;
    }

    cout << "Il numero  sarà stampato un cifra alla volta partendo da quella meno significativa" << endl;
    while (dividendo > 0) {
        quoziente =  dividendo / divisore;
        resto = dividendo % divisore;

        if (divisore == 16)
        {
            switch(resto) {
            case 10:
                cout << 'A' << endl;
                break;
            case 11:
                cout << 'B' << endl;
                break;
            case 12:
                cout << "C\n";
                break;
            case 13:
                cout << "D\n";
                break;
            case 14:
                cout << "E\n";
                break;
            case 15:
                cout << "F\n";
                break;
            default:
                cout << resto <<endl;
                break;
            } // fine switch
        } // fine if (divisore)
        else {
            cout << resto << endl;
        }
        dividendo = quoziente;
    }
    return 0;
}
