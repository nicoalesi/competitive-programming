#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define F first
#define S second

using ll = long long;

void setup() {

    return;
}

void code() {
    ll n; cin >> n;

    while (n != 1) {
        cout << n << " ";
        n = (n % 2) ? 3 * n + 1 : n / 2;
    }

    cout << n << "\n";
    return;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool many_tests = false;
    int t;

    if (many_tests) {
        cin >> t;
    } else {
        t = 1;
    }

    setup();

    while (t--) {
        code();
    }

    return 0;
}
