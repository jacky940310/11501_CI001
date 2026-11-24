#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> lines;
    string s;
    int maxLen = 0;

    while (getline(cin, s)) {
        lines.push_back(s);
        maxLen = max(maxLen, (int)s.length());
    }

    for (int j = 0; j < maxLen; j++) {
        for (int i = (int)lines.size() - 1; i >= 0; i--) {
            if (j < (int)lines[i].length()) {
                cout << lines[i][j];
            }
            else {
                cout << ' ';
            }
        }
        cout << "\n";
    }

    return 0;
}