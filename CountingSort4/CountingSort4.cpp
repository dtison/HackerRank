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

int main() {
    int n;
    cin >> n;

    vector <pair<int,string>> input_data;
    set<int> numbers_set;

    for (int i = 0; i < n; i++) {
        int number;
        string str;
        cin >> number;
        cin >> str;
        if (i < (n >> 1)) {
            str = '-';
        }
        input_data.push_back(make_pair(number , str));
        numbers_set.insert(number);
    }

    vector<int> numbers_unique;
    for (int value : numbers_set) {
        numbers_unique.push_back(value);
    }

    for (int i = 0; i < numbers_unique.size(); i++) {
        for (int j = 0; j < n; j++) {
            if (input_data[j].first == numbers_unique[i])
                cout << input_data[j].second << " " ;
        }
    }

    return 0;
}

