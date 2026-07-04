#include <iostream>
using namespace std;

void pattern(int n) {
    int space = 2* (n-1);
    for(int i=1; i<=n; i++) {
        // numbers
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        // spaces
        for(int j=1; j<=space; j++) {
            cout << " ";
        }
        // numbers
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
int main() {
    int t;
    cout << "Enter the Number: ";
    cin >> t;
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;

        pattern(n);

    }

    return 0;
}