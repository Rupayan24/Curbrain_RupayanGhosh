#include<bits/stdc++.h>
using namespace std;

long long subtractProductAndSum(long long n) {
    long long sum = 0;
    long long prod = 1;

    while (n > 0) {
        int rem = n % 10;
        sum = sum + rem;
        prod = prod * rem;
        n = n / 10;
    }

    return prod - sum;
}

int main() {
    long long n;
    cin >> n;

    cout << subtractProductAndSum(n);

    return 0;
}
