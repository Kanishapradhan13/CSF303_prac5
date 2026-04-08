#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool hasLeft  = false, hasRight = false;
        bool hasUpper = false, hasLower = false;

        for (int j = 0; j < n; j++) {
            if (x[j] < x[i] && y[j] == y[i]) hasLeft  = true;
            if (x[j] > x[i] && y[j] == y[i]) hasRight = true;
            if (y[j] > y[i] && x[j] == x[i]) hasUpper = true;
            if (y[j] < y[i] && x[j] == x[i]) hasLower = true;
        }

        if (hasLeft && hasRight && hasUpper && hasLower)
            count++;
    }

    cout << count << endl;
    return 0;
}