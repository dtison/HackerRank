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

struct element {
    int diff;
    pair <int, int> numbers;
    element (const int a, const int b) {
        int smaller = a, bigger = b;
        if (smaller > bigger) {
            smaller = b;
            bigger = a;
        }
        numbers = make_pair (smaller,bigger);
        diff = abs (a - b);
    }
};

struct elementcomp {
    bool operator() (const element & lhs, const element & rhs) const  {
        if (lhs.diff == rhs.diff) {
            return lhs.numbers.first < rhs.numbers.first;
        } else {
            return lhs.diff < rhs.diff;
        }
    }
};



int main() {
    int n;
    cin >> n;


    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

/*    for (auto & number: numbers) {
        cout << number << endl;
    }*/

    multiset<element, elementcomp> values_multi;

    for (int i = 0; i < (numbers.size() - 1); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            element e(numbers[i], numbers[j]);
            values_multi.insert(e);
        }
    }

/*
    for (auto & value: values_multi) {
        cout << "{" << value.numbers.first << ", " << value.numbers.second << " = " << value.diff << "}"  << endl;
    }
*/


    multiset<element, elementcomp>::iterator multi_iterator = values_multi.begin();
    int min_diff = (*multi_iterator).diff;
    int current_diff = min_diff;

//    cout << "min diff is " << min_diff << endl;

    while (current_diff == min_diff) {
        element e = *multi_iterator;
        cout << e.numbers.first << " " << e.numbers.second << " ";
        multi_iterator++;
        current_diff = (*multi_iterator).diff;
    }

    return 0;

}
