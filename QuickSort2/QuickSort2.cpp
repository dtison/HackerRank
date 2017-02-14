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

void partition(vector <int> & ar,
               vector <int> & left,
               vector <int> & equal,
               vector <int> & right) {

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

}

vector<int> quickSort(vector <int> &arr) {
    if (arr.size() <= 1) {
        return arr;
    } else {

        vector<int> left, equal, right;
        partition(arr, left, equal, right);

        vector<int> qs_left = quickSort(left);
        vector<int> qs_right = quickSort(right);
        vector<int> sub_array;
        sub_array.insert(sub_array.end(), qs_left.begin(), qs_left.end());
        sub_array.insert(sub_array.end(), equal.begin(), equal.end());
        sub_array.insert(sub_array.end(), qs_right.begin(), qs_right.end());

        displayArray(sub_array);

        return sub_array;
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
