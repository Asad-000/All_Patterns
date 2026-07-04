#include <iostream>
using namespace std;

void pattern(int n) {
    int initialSpace = 0;
    for(int i=0; i<n; i++) {
        // Stars
        for(int j=1; j<=n-i; j++) {
            cout << "*";
        }
        // Spaces
        for(int j=0; j<initialSpace; j++) {
            cout << " ";
        }
        // Stars
        for(int j=1; j<=n-i; j++) {
            cout << "*";
        }
        initialSpace += 2;
        cout << endl;
    }

    initialSpace = 2*n-2;
    for(int i=1; i<=n; i++) {
        // Stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        // Spaces
        for(int j=0; j<initialSpace; j++) {
            cout << " ";
        }
        // Stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        initialSpace -= 2;
        cout << endl;
    }

}

int main() {
    
    int n;
    cout << "Enter the Number: ";
    cin >> n;

   pattern(n);
        
    return 0;
}