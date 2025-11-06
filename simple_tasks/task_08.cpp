#include <iostream>
#include <string>

int main() {
    std::string dna = ""; 
    std::cin >> dna;

    std::string result = "";


    for (int i = 0; i < dna.length(); i++) {
        char c = dna[i];

        if (c == 'A') result += 'T';
        else if (c == 'T') result += 'A';
        else if (c == 'C') result += 'G';
        else if (c == 'G') result += 'C';
    }

    std::cout << result;
    return 0;
}

