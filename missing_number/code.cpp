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
    ll x = 1;

    for (ll i = 2; i <= n; i++) {
        ll temp; cin >> temp;
        x ^= i ^ temp;
    }
    
    cout << x << "\n";
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
