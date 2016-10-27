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
    int num_tests;

    cin >> num_tests;

    for (int i = 0; i < num_tests; i++) {
        int num_elements;
        cin >> num_elements;

        int result = 0;

        // All elements must be read from stdin.
        // But only odd numbered [even indexed] elements are xor'd.
        // And only in cases when number elements is odd
        for (int j = 0; j < num_elements; j++) {
            int value;
            cin >> value;

            if (((num_elements & 0x01) == 0x01) && (j & 0x01) == 0x00) {
                result ^= value;
            }

        }

        cout << result << endl;

    }
    return 0;
}