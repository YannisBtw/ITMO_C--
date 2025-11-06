#include <iostream>
#include <string>

int main() {
    int N = 0;
    std::cin >> N;

    int x = 0;
    std::cin >> x;

    int minValue = x;
    int count = 1;

    for (int i = 1; i < N; i++) {
        std::cin >> x;

        if (x < minValue) {
            minValue = x;
            count = 1;
        }
        else if (x == minValue) {
            count++;
        }
    }

    std::cout << count;
    return 0;
}
