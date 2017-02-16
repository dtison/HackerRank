#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    map <int, int> counts;
    vector <int> numbers(n);
    for (int i = 0; i < n; i++) {
        int number;
        cin >> numbers[i];
        counts[numbers[i]]++;
    }
#if 0
    cout << "Original " << endl;
    for (int & number: numbers) {
        cout << number << " ";
    }
    cout << endl;

    cout << "Histogram " << endl;
    for (int i = 0; i < 100; i++) {
        cout << counts[i] << " ";
    }
    cout << "\n";
#endif

    // calculate the starting index for each key:
    int total = 0;
    for (int i = 0; i < 100; i++) {
        int old_count = counts[i];
        counts[i] = total;
        total += old_count;
    }

    // copy to output array, preserving order of inputs with equal keys:
    vector <int> output(n);
    for (int & number: numbers) {
        output[counts[number]] = number;
        counts[number]++;
    }

    for (int & number: output) {
        cout << number << " ";
    }

}
