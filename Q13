#include <iostream>
#include <vector>
using namespace std;

bool prefixSumDivisibleByK(vector<int>& arr, int k) {
    long long sum = 0;
    if (k < 0) k = -k;

    for (int num : arr) {
        sum += num;
        if (sum % k == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {2, 3, 5};
    int k = 5;

    cout << (prefixSumDivisibleByK(arr, k) ? "True" : "False");
    return 0;
}
