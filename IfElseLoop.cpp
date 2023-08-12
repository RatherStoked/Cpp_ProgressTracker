#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string numbers[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    if (n >= 0 && n <= 9) {
        std::cout << numbers[n];
    } else {
        std::cout << "Greater than 9";
    }

    return 0;
}
