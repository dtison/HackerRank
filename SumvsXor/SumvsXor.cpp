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
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdint>

using namespace std;

int main() {

    long value;

    cin >> value;
    int zero_count = 0;
    while (value > 0) {
        if ((value & 1) == 0)
            zero_count++;
        value >>= 1;
    }

    long total = 1L << zero_count;

    cout << total << endl;
    return 0;
}
