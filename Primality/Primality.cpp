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

bool is_prime (int n) {

    if (n <= 3) {
        return n > 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    bool prime = true;
    for (int i = 5; i * i <= n && prime; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            prime = false;
        }
    }
    return prime;
}

int main() {

    int num_values;
    cin >> num_values;
    for (int i = 0; i < num_values; i++){
        int n;
        cin >> n;
        if (is_prime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
     }

    return 0;
}
