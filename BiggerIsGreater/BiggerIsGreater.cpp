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
#include <vector>
#include <stdlib.h> 

using namespace std;



int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;
        string permutation = word;
        if (next_permutation(permutation.begin(), permutation.end()) && permutation != word) {
            cout << permutation  << endl;
        } else {
            cout << "no answer" << endl;
        }
    }
  
    return 0;
}
