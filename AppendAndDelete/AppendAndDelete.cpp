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

int get_similar_length (const string s, const string t) {
    int similar_length = 0;
    bool similar = true;
    for (int i = 0; i < s.length() && i < t.length() && similar; i++) {
        if (s[i] == t[i]) {
            similar_length++;
        } else {
            similar = false;
        }
    }
    return similar_length;
}

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    
    //  any k >= all_k can be done because unlimited deletes
    int all_k = s.length() + t.length();

    //  Min possible value for k
    int similar_length = get_similar_length (s, t);
    int min_k = all_k - (similar_length << 1);
    
    bool min_k_odd = min_k & 1;

    bool passes = false;
    if (k >= all_k) {
        passes = true;
    } else {
        if (k >= min_k && (k & 1) == min_k_odd) {
            passes = true;
        } 
    }

    if (passes) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
