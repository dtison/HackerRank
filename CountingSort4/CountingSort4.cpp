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

class data_pair {
public:
    int value;
    string text;
    data_pair (const int value, const string text) : value(value), text(text) {}
};


struct paircomp {
    bool operator() (const data_pair & lhs, const data_pair & rhs) const
    {return lhs.value < rhs.value;}
};



int main() {
    int n;
    cin >> n;

    multiset<data_pair, paircomp> values_multi;

    for (int i = 0; i < n; i++) {
        int number;
        string str;
        cin >> number;
        cin >> str;
        if (i < (n >> 1)) {
            str = '-';
        }
        data_pair pair(number, str);
        values_multi.insert(pair);
    }

    for (auto & data: values_multi) {
        cout << data.text << " ";
    }
    return 0;

}
