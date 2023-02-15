#include <iostream>
#include <vector>
#include "utils.h";

using namespace std;

int main() {

    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = get_sum(numbers);

    cout << "The sum of numbers in the vector is: " << sum << "\n";

    float average = get_average(numbers);

    cout << "The average of numbers in the vector is: " << average << "\n";
    
    return 0;
}