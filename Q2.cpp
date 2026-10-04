#include<bits/stdc++.h>
using namespace std;

long long reverse_and_double(long long n) {
    long long rev = 0;
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev * 2;
}

int main() {
    long long n;
    cin >> n;

    cout << reverse_and_double(n);

    return 0;
}
