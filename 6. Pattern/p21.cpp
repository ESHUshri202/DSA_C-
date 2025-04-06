#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            cout << "  "; // Double space for better alignment
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";  // Unicode star character
        }
        cout << endl;
    }

    return 0;
}
