#include <iostream>
using namespace std;

void pattern(int n) {
    for(int i=0; i<n; i++) { 
        for(int j=0; j<i; j++) { // space
            cout << " ";
        }
            for(int j=0; j<2*n-(2*i+1); j++) { // star
                cout << "*";
            }
            for(int j=0; j<i; j++) { // space
                cout << " ";
            }
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