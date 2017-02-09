#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int v, n;
    cin >> v >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        numbers[i] = value;
    }
    int pos = lower_bound (numbers.begin(), numbers.end(), v) - numbers.begin();
    cout << pos << endl;

    return 0;
}
