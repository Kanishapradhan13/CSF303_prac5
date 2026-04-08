#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int friendsSum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        friendsSum += x;
    }

    int circle = n + 1; // total people including Dima
    int count = 0;

    for (int d = 1; d <= 5; d++) {
        int total = friendsSum + d;
        if (total % circle != 1) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}