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

float find_median (vector<int> vec) {
    int size = vec.size();
    if (size == 1) {
        return static_cast <float> (vec[0]);
    }
    if (size & 1) {
        return static_cast <float> (vec[size >> 1]);
    } else {
        int middle = (size >> 1) - 1;
        return (vec[middle] + vec[middle + 1]) / 2.0;
    }

}

template < typename T >
typename std::vector<T>::iterator insert_sorted (std::vector<T> & vec, T const& item) {
    return vec.insert (std::upper_bound( vec.begin(), vec.end(), item ), item);
}


int main(){
    int n;
    cin >> n;
    vector<int> a;
    for (int a_i = 0;a_i < n;a_i++){
        int value;
        cin >> value;

        insert_sorted (a, value);
        float median = find_median(a);
        printf ("%3.1f\n", median);
    }
    return 0;
}
