#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];

    long long windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += h[i];

    long long minSum = windowSum;
    int bestStart = 1;

    for (int i = k; i < n; i++) {
        windowSum += h[i];
        windowSum -= h[i - k];

        if (windowSum < minSum) {
            minSum = windowSum;
            bestStart = i - k + 2;
        }
    }

    cout << bestStart << endl;
    return 0;
}