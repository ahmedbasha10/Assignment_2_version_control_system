#include "utilities.h"

int get_sum(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    return sum;
}