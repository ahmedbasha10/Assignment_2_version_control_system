#include <vector>

int get_sum(std::vector<int> numbers) {
    int sum = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    
    return sum;
}

