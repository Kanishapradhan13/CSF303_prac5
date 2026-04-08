#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    string result;

    char first  = (n >= m) ? 'B' : 'G';
    char second = (n >= m) ? 'G' : 'B';
    int firstCount  = (n >= m) ? n : m;
    int secondCount = (n >= m) ? m : n;

    while (firstCount > 0 || secondCount > 0) {
        if (firstCount > 0)  { result += first;  firstCount--;  }
        if (secondCount > 0) { result += second; secondCount--; }
    }

    cout << result << endl;
    return 0;
}