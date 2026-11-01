#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int mostPopularItem(const vector<int>& sales) {
    unordered_map<int, int> freq;
    for (int id : sales) {
        freq[id]++;
    }

    int bestId = sales[0];
    int maxCount = -1;

    for (const auto& [id, count] : freq) {
        if (count > maxCount) {
            maxCount = count;
            bestId = id;
        } else if (count == maxCount && id < bestId) {
            bestId = id;
        }
    }

    return bestId;
}

int main() {
    vector<int> t1 = {101, 103, 101, 102, 103, 105, 101, 103};
    cout << mostPopularItem(t1) << "\n";

    vector<int> t2 = {5, 5, 5, 2, 2, 2, 2};
    cout << mostPopularItem(t2) << "\n";

    vector<int> t3 = {99};
    cout << mostPopularItem(t3) << "\n";

    vector<int> t4 = {-2, -2, 3, 3, 8};
    cout << mostPopularItem(t4) << "\n";

    vector<int> t5 = {4, 1, 4, 1, 7};
    cout << mostPopularItem(t5) << "\n";

    return 0;
}
