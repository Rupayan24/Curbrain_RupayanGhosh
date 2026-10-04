#include<bits/stdc++.h>
using namespace std;

int digitFrequencyDifference(long long n, int a, int b) {
    int countA = 0;
    int countB = 0;

    if (n == 0) {
        if (a == 0) countA++;
        if (b == 0) countB++;
        return abs(countA - countB);
    }

    while (n > 0) {
        int rem = n % 10;
        if (rem == a) {
            countA++;
        }
        if (rem == b) {
            countB++;
        }
        n = n / 10;
    }

    return abs(countA - countB);
}

int main() {
    long long n;
    int a, b;
    cin >> n >> a >> b;

    cout << digitFrequencyDifference(n, a, b);

    return 0;
}
