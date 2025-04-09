#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer (a): ";
    cin >> a;

    int n;
    if (a % 2 == 0) {
        n = a - 1; 
    } else {
        n = a; 
    }
    int count = n;
    for (int i = 1; i <= 2 * count - 1; i +=2) {
        cout << i;
        if (i < 2 * count - 1)  
            cout << ", ";
    }
    cout << endl;

    return 0;
}
