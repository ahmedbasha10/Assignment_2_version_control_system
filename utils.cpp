#include <vector>

using namespace std;

int getSum(vector<int> numbers) {
    int sum = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    return (float)sum / numbers.size();
}

