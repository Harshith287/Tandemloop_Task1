#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> countMap;
    for (int i = 1; i <= 9; ++i) {
        countMap[i] = 0;
    }

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int num : numbers) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) {
                countMap[i]++;
            }
        }
    }

    for (const auto& it : countMap) {
        cout << it.first << ": " << it.second << ", ";
    }
    cout << endl;

    return 0;
}
