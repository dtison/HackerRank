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
    string repeated_string;
    uint64_t char_total;

    cin >> repeated_string;
    cin >> char_total;

    //  (char_total / repeated string length) X a's count per string
    uint64_t a_total =  ((char_total / repeated_string.size()) *
                         count(repeated_string.begin(), repeated_string.end(),'a'));
    // add a's count from partial end string
    a_total += count(repeated_string.begin(), repeated_string.begin() + (char_total % repeated_string.size()),'a');

    cout << a_total;

    return 0;
}