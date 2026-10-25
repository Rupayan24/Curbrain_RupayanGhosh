#include <iostream>
#include <vector>

using namespace std;

vector<int> filterSales(const vector<int>& sales, int threshold) {
    vector<int> result;

    for (int value : sales) {
        if (value >= threshold) {
            result.push_back(value);
        }
    }

    return result;
}

int main() {
    vector<int> sales1 = {150, 80, 200, 90, 300};
    int threshold1 = 100;
    vector<int> result1 = filterSales(sales1, threshold1);

    vector<int> sales2 = {50, 70, 90};
    int threshold2 = 100;
    vector<int> result2 = filterSales(sales2, threshold2);

    vector<int> sales3 = {100, 50, 100};
    int threshold3 = 100;
    vector<int> result3 = filterSales(sales3, threshold3);

    return 0;
}
