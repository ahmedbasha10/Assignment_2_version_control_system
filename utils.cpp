#include <vector>

using namespace std;

int getSum(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return sum;
}

float get_average(vector<int> numbers) {
    int sum = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    return (float)sum / numbers.size();
}

