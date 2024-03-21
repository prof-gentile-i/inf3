#include<iostream>

int main() {

    int n; // dimensione array
    std::cout << "Dimensione array n = ";
    std::cin >> n;

    int v[n];

    // Lettura array
    for(int i = 0; i < n; i++) {
        std::cout << "v[" << i << "] = ";
        std::cin >> v[i];
    }

    bool palindroma = true; // suppongo che il numero sia palindromo

    int i = 0, j = n - 1;
    while (i < j) {
        if (v[i] != v[j]) {
            palindroma = false;
            break;
        }
        i++;
        j--;
    }

    if(palindroma == true) 
        std::cout << "Numero palindromo";
    else
        std::cout << "Numero NON palindromo";

}