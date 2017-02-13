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

void displayArray (vector <int> ar) {
    for (int & element : ar) {
        cout << element << " ";
    }
    cout << endl;
}

vector <int> sortValueIn(vector <int> & ar, const int pos) {

    int current_index = pos ;

    const int last_value = ar[current_index];

    current_index--;
    while (ar[current_index] > last_value) {
        ar[current_index + 1] = ar[current_index];
        current_index--;
    }

    ar[current_index + 1] = last_value;
    return ar;
}

void insertionSort(vector <int> ar) {
    for (int i = 1; i < ar.size(); i++ ) {
        ar = sortValueIn(ar, i);
        displayArray(ar);
    }
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

    insertionSort(_ar);
    return 0;
}