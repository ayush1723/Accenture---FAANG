#include <iostream>
#include <vector>
using namespace std;

int findSingleRepeatingNumber(vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5};
    int repeatingNumber = findSingleRepeatingNumber(arr);
    cout << "The number that repeats once is: " << repeatingNumber << endl;
    return 0;
}