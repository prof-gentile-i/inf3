#include<iostream>
#include<fstream>

int main() {

    std::ifstream in("array.txt");
    int n; // dimensione array
    in >> n;

    int v[n];

    // Lettura array
    for(int i = 0; i < n; i++)
        in >> v[i];

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


    std::cout << "v = [";
    for(int i = 0; i < n-1; i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << v[n-1] << "]" << std::endl;

    if(palindroma == true) 
        std::cout << "Numero palindromo";
    else
        std::cout << "Numero NON palindromo";

}