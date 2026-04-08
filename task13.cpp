#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    long long abc = round(sqrt((double)(s1 * s2 * s3)));

    long long a = abc / s2;
    long long b = abc / s3;
    long long c = abc / s1;

    cout << 4 * (a + b + c) << endl;

    return 0;
}