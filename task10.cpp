#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    queue<pair<int,int>> q; // {child index, candies needed}

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        q.push({i, a});
    }

    int last = -1;

    while (!q.empty()) {
        auto [idx, need] = q.front();
        q.pop();

        need -= m;

        if (need <= 0) {
            last = idx; // child goes home
        } else {
            q.push({idx, need}); // back to end of line
        }
    }

    cout << last << endl;
    return 0;
}