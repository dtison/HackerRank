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

void displayArrays(vector <int> & left,
                   vector <int> & equal,
                   vector <int> & right) {

    auto displayElement = [] (int & element) -> void {  cout << element << " ";};

    for_each(left.begin(), left.end(), displayElement);
    for_each(equal.begin(), equal.end(), displayElement);
    for_each(right.begin(), right.end(), displayElement);
}

void partition(vector <int>  ar) {
    // Enter code for partitioning and printing here.
    vector<int> left, equal, right;
    int pivot_value = ar[0];
    for (int & element : ar) {
        if (element < pivot_value) {
            left.push_back(element);
        } else if (element > pivot_value) {
            right.push_back(element);
        } else {
            equal.push_back(element);
        }
    }

    displayArrays(left, equal, right);
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;

    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    partition(_ar);

    return 0;
}