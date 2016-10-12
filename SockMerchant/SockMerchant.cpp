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

    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }

    sort(c.begin(),c.end());
    int pairs = 0;
    int index = 1;
    do {
        if (c[index] == c[index - 1]) {
            pairs++;
            index++;
        }
    }  while (index++ < c.size());
    cout << pairs;


    return 0;
}