#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << "False";
        return 0;
    }

    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }

    if (count % 2 == 0) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
