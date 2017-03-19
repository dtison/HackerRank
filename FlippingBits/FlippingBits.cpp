#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>
#include <bitset>

using namespace std;

uint32_t bit_flip(uint32_t number) {
    uint32_t result = number;
    for (int i = 0; i < sizeof(uint32_t) << 3; i++) {
        result ^= (1 << i);
    }
    return result;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        uint32_t number;
        cin >> number;
        cout << bit_flip(number) << endl;
    }

    return 0;
}
