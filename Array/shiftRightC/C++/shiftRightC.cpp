// Trasforma un testo da minuscolo a maiuscolo
// Il testo è su file

#include <iostream>
#include <cstdlib>
#include <ctime>


int main () {
    const int MAX_DIM = 20,  MIN_DIM = 1;;
    int v[MAX_DIM];

    const int MAX_VALUE = 100, MIN_VALUE = 0;
    
    srand(time(NULL));


    int n = rand()%(MAX_DIM-MIN_DIM +1)+ MIN_DIM;

    // Generazione array
    for(int i =0; i < n; i++)
        v[i] = rand()%(MAX_VALUE-MIN_VALUE +1)+ MIN_VALUE;

    // Stampa array
    std::cout << "v = [ ";
    for(int i = 0; i < n-1; i++)
        std::cout << v[i] << ", ";
    std::cout << v[n-1]<< "]" << std::endl;


    // shift
    int save = v[n-1];
    for(int i = n-1; i>0; i--)
        v[i] = v[i-1];
    v[0] = save;


    // Stampa array
    std::cout << "v = [ ";
    for(int i = 0; i < n-1; i++)
        std::cout << v[i] << ", ";
    std::cout << v[n-1]<< "]";
}
