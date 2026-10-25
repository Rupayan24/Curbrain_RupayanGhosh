#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int findSmallestAbs(const vector<int>& arr) {
    int bestValue = arr[0];
    int minAbs = abs(arr[0]);

    for (size_t i = 1; i < arr.size(); ++i) {
        int currentAbs = abs(arr[i]);
        if (currentAbs < minAbs) {
            minAbs = currentAbs;
            bestValue = arr[i];
        }
    }

    return bestValue;
}

int main() {
    vector<int> arr1 = {10, -5, -2, 4, 2};
    cout << findSmallestAbs(arr1) << "\n";

    vector<int> arr2 = {-3, 3, -1, 1};
    cout << findSmallestAbs(arr2) << "\n";

    return 0;
}
