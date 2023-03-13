// Trasforma un testo da minuscolo a maiuscolo
// Il testo è su file

#include <iostream>
#include <fstream>

int main () {
    int c;

    std::ifstream in("input.txt");
    std::ofstream out ("output.txt");

    while((c = in.get()) != EOF) {
        if (c >= 'a' and c <='z') 
            c = 'A' + c - 'a';
        out << static_cast<char>(c);  // oppure (char) c    
    }
}
