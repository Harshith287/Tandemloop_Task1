#include <bits/stdc++.h>
using namespace std;

void generateSeries(int a) {
    int num = 1;
    for (int i = 1; i <= a; i++) {
        cout <<num; 
        if (i < a) {
            cout << ", ";
        }
        num += 2;
    }
    cout << endl; 
}

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >>a;
    generateSeries(a);
    
    return 0;
}
