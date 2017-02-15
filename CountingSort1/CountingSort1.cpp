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

    for (int i = 0; i < 100; i++) {
        cout << counts[i] << " ";
    }
    cout << "\n";

    return 0;
}