// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

const int AVG_LOW = 125;
const int AVG_HIGH = 175;

bool TimeisAverage(int total_time)
{
    return total_time > AVG_LOW && total_time < AVG_HIGH;
}


int main() {
    
    cout << "Please enter the time you started your race in 24hr time: ";
    int start_time = 0;
    cin >> start_time;
    
    cout << "Please enter your finish time: ";
    int end_time;
    cin >> end_time;
    
    int total_time = end_time - start_time;
    
    if(total_time != abs(total_time))
    {
        cout << "error in user input";
        return EXIT_FAILURE;
    }
    
    if(!TimeisAverage(total_time))
    {
        cout << "Your time was not average: ";
    } else
    {
        cout << "Your time was average: ";
    }
    
    cout << total_time;


    return EXIT_SUCCESS;
}
