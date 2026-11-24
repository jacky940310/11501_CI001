#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i, j;
    while (cin >> i >> j) {
        int start = min(i, j);
        int end = max(i, j);
        int maxLen = 0;

        for (int k = start; k <= end; k++) {
            long long n = k;
            int length = 1;

            while (n != 1) {
                if (n % 2 == 1) {
                    n = 3 * n + 1;
                }
                else {
                    n /= 2;
                }
                length++;
            }

            maxLen = max(maxLen, length);
        }

        cout << i << " " << j << " " << maxLen << "\n";
    }

    return 0;
}