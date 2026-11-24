#include <iostream>
using namespace std;
int main() {
    char c;
    bool isOpen = true;
    while (cin.get(c)) {
        if (c == '"') {
            if (isOpen) {
                cout << "``";
            }
            else {
                cout << "''";
            }
            isOpen = !isOpen;
        }
        else {
            cout << c;
        }
    }

    return 0;
}