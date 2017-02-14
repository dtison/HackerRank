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

int partitionLomuto(vector <int> & numbers, int lo, int hi) {
    int pivot = numbers[hi];
    cout << "pivot now: " << pivot << endl;
    int i = lo - 1;
    for (int j = lo; j < hi; j++) {
        if (numbers[j] <= pivot) {
            cout << numbers[j] << " <= " << pivot << " i is " << i << endl;
            i++;
            swap(numbers[i], numbers[j]);

        }
    }
    swap(numbers[i + 1], numbers[hi]);

    displayArray(numbers);

    return i + 1;
}

void quickSort(vector <int> & numbers, int lo, int hi) {

    // Continue sorting array until lo reaches hi
    if (lo < hi) {
        int pivot = partitionLomuto(numbers, lo, hi);
        quickSort(numbers, lo, pivot - 1);
        quickSort(numbers, pivot + 1, hi);
    }
}


int main() {
    int n;
    cin >> n;

    vector <int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    displayArray(numbers);

    quickSort(numbers, 1, numbers.size() - 1);

    return 0;
}

/*  Test 1
 *
 *
1 2 6 7 3 5 4 9 8
1 2 6 7 3 5 4 8 9
1 2 3 4 6 5 7 8 9
1 2 3 4 6 5 7 8 9
1 2 3 4 5 6 7 8 9
 *
 */