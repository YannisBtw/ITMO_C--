#include <iostream>
#include <string>

int main() {
    std::string dna = "";        // исходна€ последовательность ƒЌ 
    std::cin >> dna;

    std::string result = "";     // результат Ч комплементарна€ цепочка

    // перебираем каждый символ исходной строки
    for (int i = 0; i < dna.length(); i++) {
        char c = dna[i];

        if (c == 'A') result += 'T';
        else if (c == 'T') result += 'A';
        else if (c == 'C') result += 'G';
        else if (c == 'G') result += 'C';
    }

    std::cout << result;         // выводим комплементарную цепочку
    return 0;
}
