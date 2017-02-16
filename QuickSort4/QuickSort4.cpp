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



void displayArray(vector <int> & array) {
    for_each(array.begin(), array.end(), [] (int & element) {cout << element << " ";});
    cout << endl;
}

vector <int> sortValueIn(vector <int> & ar, const int pos, int & num_shifts) {

    int current_index = pos ;

    const int last_value = ar[current_index];

    current_index--;
    while (current_index >= 0 && ar[current_index] > last_value) {
        ar[current_index + 1] = ar[current_index];
        current_index--;
        num_shifts++;
    }

    ar[current_index + 1] = last_value;
    return ar;
}

void insertionSort(vector <int> ar, int & num_shifts) {
    for (int i = 1; i < ar.size(); i++ ) {
        ar = sortValueIn(ar, i, num_shifts);
    }
}




int partitionLomuto(vector <int> & numbers, int lo, int hi, int & num_shifts) {
    int pivot = numbers[hi];
    int i = lo - 1;
    for (int j = lo; j < hi; j++) {
        if (numbers[j] <= pivot) {
            i++;
            swap(numbers[i], numbers[j]);
            num_shifts++;
        }
    }
    swap(numbers[i + 1], numbers[hi]);
    num_shifts++;

    return i + 1;
}

void quickSort(vector <int> & numbers, int lo, int hi, int & num_shifts) {

    // Continue sorting array until lo reaches hi
    if (lo < hi) {
        int pivot = partitionLomuto(numbers, lo, hi, num_shifts);
        quickSort(numbers, lo, pivot - 1, num_shifts);
        quickSort(numbers, pivot + 1, hi, num_shifts);
    }
}


int main() {
    int n;
    cin >> n;

    vector <int> numbers_insert(n);
    vector <int> numbers_quick(n);

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        numbers_insert[i] = value;
        numbers_quick[i] = value;
    }
    int num_shifts_insert = 0;
    insertionSort(numbers_insert, num_shifts_insert);

    int num_shifts_quick = 0;
    quickSort(numbers_quick, 0, n - 1, num_shifts_quick);

    cout << num_shifts_insert - num_shifts_quick << endl;
    return 0;
}
