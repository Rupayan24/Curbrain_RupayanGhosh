#include<bits/stdc++.h>
using namespace std;

vector replaceEvenDigits(long long n) {
    vector ans;

    while (n > 0) {
        int rem = n % 10;
        if (rem % 2 == 0) {
            ans.push_back(0);
        } else {
            ans.push_back(rem);
        }
        n = n / 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    long long n;
    cin >> n;

    vector result = replaceEvenDigits(n);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";

    return 0;
}
