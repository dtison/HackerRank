#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    int cloud_index = 0;
    int step_count = 0;
    bool done = false;
    while (! done) {

        int step;
        if (cloud_index == (n - 2)) {
            step = 1;
        } else {
           step = c[cloud_index + 2] == 1 ? 1 : 2;
        }

        cloud_index += step;
        if (cloud_index == (n - 1)) {
            done = true;
        }
        step_count++;
    }

    cout << step_count << endl;
    return 0;
}