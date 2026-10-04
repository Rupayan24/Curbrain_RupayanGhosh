#include<bits/stdc++.h>
using namespace std;

long long solve(long long n) {
    long long temp = n;
    long long rev = 0;

    while (temp != 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (n >= 0 && n == rev) {
        return n;
    } else {
        return n + rev;
    }
}

int main() {
    long long n;
    cin >> n;

    cout << solve(n);

    return 0;
}
