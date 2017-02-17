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
    for (int i = 0; i < n; i++) {
        int number;
        string str;
        cin >> number;
        cin >> str;
        counts[number]++;
    }

    int count = 0;
    for (int i = 0; i < 100; i++) {
        count += counts[i];
        cout << count << " ";

    }

    return 0;
}
