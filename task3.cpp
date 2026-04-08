#include <bits/stdc++.h>
using namespace std;

bool allDistinct(int year) {
    set<int> digits;
    while (year > 0) {
        digits.insert(year % 10);  // extract last digit
        year /= 10;
    }
    return digits.size() == 4;    // all 4 must be unique
}

int main() {
    int y;
    cin >> y;

    y++;  // start checking from y+1 (strictly greater)

    while (!allDistinct(y)) {
        y++;
    }

    cout << y << endl;
    return 0;
}