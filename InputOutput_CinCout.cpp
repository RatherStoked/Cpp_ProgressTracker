#include <iostream>

int main() {
    int a, b, c;
    
    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;
    
    int sum = a + b + c;
    
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
