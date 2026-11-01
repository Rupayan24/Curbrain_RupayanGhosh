#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void reverseSubsegment(vector<int>& arr, int start, int end) {
    int left = start;
    int right = end;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void printVector(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << (i + 1 < arr.size() ? ", " : "");
    }
    cout << "]\n";
}

int main() {
    vector<int> t1 = {10, 20, 30, 40, 50, 60};
    reverseSubsegment(t1, 1, 4);
    printVector(t1);

    vector<int> t2 = {1, 2, 3, 4};
    reverseSubsegment(t2, 0, 3);
    printVector(t2);

    vector<int> t3 = {7};
    reverseSubsegment(t3, 0, 0);
    printVector(t3);

    vector<int> t4 = {1, 2, 3, 4, 5};
    reverseSubsegment(t4, 2, 4);
    printVector(t4);

    vector<int> t5 = {1, 2, 3, 4, 5};
    reverseSubsegment(t5, 0, 2);
    printVector(t5);

    return 0;
}
