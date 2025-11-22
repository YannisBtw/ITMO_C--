#include <iostream>
#include <string>

namespace tasks {

    // ---------- Задача 5 ----------
    void task05() {
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
            } else if (x == minValue) {
                count++;
            }
        }

        std::cout << count;
    }

    // ---------- Задача 6 ----------
    void task06() {
        int A = 0;
        std::cin >> A;

        int f1 = 1;
        int f2 = 1;
        int n = 2;

        if (A == 1) {
            std::cout << 2;
            return;
        }

        while (f2 < A) {
            int next = f1 + f2;
            f1 = f2;
            f2 = next;
            n++;
        }

        if (f2 == A) {
            std::cout << n;
        } else {
            std::cout << -1;
        }
    }

    // ---------- Задача 7 ----------
    void task07() {
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
    }

    // ---------- Задача 8 ----------
    void task08() {
        std::string dna = "";
        std::cin >> dna;

        std::string result = "";

        for (int i = 0; i < static_cast<int>(dna.length()); i++) {
            char c = dna[i];

            if (c == 'A') result += 'T';
            else if (c == 'T') result += 'A';
            else if (c == 'C') result += 'G';
            else if (c == 'G') result += 'C';
        }

        std::cout << result;
    }

    // ---------- Задача 9 ----------
    void task09() {
        int N;
        std::cin >> N;

        int power = 1;

        while (power <= N) {
            std::cout << power;
            power *= 2;

        }
    }

    // ---------- Задача 10 ----------
    void task10() {
        int N;
        std::cin >> N;
        int x;
        int maxVal;

        std::cin >> x;
        maxVal = x;

        for (int i = 1; i < N; ++i) {
            std::cin >> x;
            if (x > maxVal) {
                maxVal = x;
            }
        }

        std::cout << maxVal << std::endl;
    }

    // ---------- Задача 11 ----------
    void task11() {
        int N;
        std::cin >> N;

        int countPositive = 0;
        int x;

        for (int i = 0; i < N; ++i) {
            std::cin >> x;
            if (x > 0) {
                countPositive++;
            }
        }

        std::cout << countPositive << std::endl;
    }

    // ---------- Задача 12 ----------
    void task12() {
        int n;
        std::cin >> n;

        int sum = 0;
        int x;

        for (int i = 0; i < n; ++i) {
            std::cin >> x;
            if (x >= 10 && x <= 99 && x % 8 == 0) {
                sum += x;
            }
        }

        std::cout << sum << std::endl;
    }

    // ---------- Задача 13 ----------
    void task13() {
        int x;
        int maxVal = 0;
        int countMax = 0;

        while (true) {
            std::cin >> x;
            if (x == 0) {
                break;
            }

            if (x > maxVal) {
                maxVal = x;
                countMax = 1;
            } else if (x == maxVal) {
                countMax++;
            }
        }

        std::cout << countMax << std::endl;
    }

    // ---------- Задача 14 ----------
    void task14() {
        std::string a, b;
        std::cin >> a >> b;

        for (char c : a) {
            for (char d : b) {
                if (c == d) {
                    std::cout << c << " ";
                    break;
                }
            }
        }
    }

}

int main() {
    int taskNumber;
    if (!(std::cin >> taskNumber)) {
        return 0;
    }

    switch (taskNumber) {
        case 5:  tasks::task05(); break;
        case 6:  tasks::task06(); break;
        case 7:  tasks::task07(); break;
        case 8:  tasks::task08(); break;
        case 9:  tasks::task09(); break;
        case 10: tasks::task10(); break;
        case 11: tasks::task11(); break;
        case 12: tasks::task12(); break;
        case 13: tasks::task13(); break;
        case 14: tasks::task14(); break;
        default:
            break;
    }

    return 0;
}
