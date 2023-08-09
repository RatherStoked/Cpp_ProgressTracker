#include <iostream>
//#include <cstdio>

int main() {
    int integerNum;
    long longNum;
    char characterNum;
    float floatNum;
    double doubleNum;
  
    //printf and scanf example solution
    //scanf("%d %ld %c %f %lf", &integerNum, &longNum, &characterNum, &floatNum, &doubleNum);
    //printf("%d\n%ld\n%c\n%f\n%lf\n", integerNum, longNum, characterNum, floatNum, doubleNum);

    // cin and cout example solution
    std::cin >> integerNum 
             >> longNum 
             >> characterNum 
             >> floatNum 
             >> doubleNum;
             
    std::cout << integerNum << '\n' 
              << longNum << '\n' 
              << characterNum << '\n' 
              << floatNum << '\n' 
              << doubleNum;

    return 0;
}
