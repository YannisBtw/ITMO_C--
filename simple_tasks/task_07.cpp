#include <iostream>
#include <string>

int main() {
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    int result = -1;

    for (int i = b; i >= a; i--) {
        if (i % 7 == 0) {
            result = i;
            break;
        }
    }

    std::cout << result;
    return 0;
}
