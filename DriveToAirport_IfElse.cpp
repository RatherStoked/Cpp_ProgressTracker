#include <iostream>

int main() {
    const float taxiThreshold = 100.0;
    
    std::cout << "State trip length (days): ";
    int num_days = 0;
    std::cin >> num_days;
    
    std::cout << "Will work pay for the trip (y/n)? ";
    char work_paying = 'g';
    std::cin >> work_paying;
    
    if (work_paying == 'y') {
        float cost = num_days * 25.0;
        if (cost > taxiThreshold) {
            std::cout << "It is cheaper to take a taxi." << std::endl;
        } else {
            std::cout << "It is cheaper to park your car at the airport." << std::endl;
        }
    } else if (work_paying == 'n') {
        std::cout << "Ask a friend to drive you." << std::endl;
    } else {
        std::cout << "Something was wrong with your inputs." << std::endl;
    }
    
    return 0;
}
