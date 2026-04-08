#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int L = -1, R = -1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            if (L == -1) L = i;
            R = i + 1;
        }
    }

    if (L == -1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    reverse(a.begin() + L, a.begin() + R + 1);

    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "yes\n" << L + 1 << " " << R + 1 << "\n"; // 1-indexed
    } else {
        cout << "no\n";
    }

    return 0;
}