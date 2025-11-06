#include <iostream>
#include <string>

int main() {
    int A = 0;
    std::cin >> A;

    int f1 = 1;
    int f2 = 1;
    int n = 2;

    if (A == 1) {
        std::cout << 2;
        return 0;
    }

    while (f2 < A) {
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
        n++;
    }

    if (f2 == A) {
        std::cout << n;
    }
    else {
        std::cout << -1;
    }

    return 0;
}
