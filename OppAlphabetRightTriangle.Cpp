#include <iostream>
using namespace std;

void pattern(int n) {
    for(char i=n; i>=0; i--) {
        for(char j='A'; j<'A' + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    pattern(n);
}