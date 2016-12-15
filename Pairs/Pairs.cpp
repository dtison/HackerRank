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
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


map <int, int> map_given_values_as_one (vector <int> & a) {
    map <int, int> hashmap;
    for (auto i : a) {
        hashmap [i] = 1;
    }
    return hashmap;
}

int pairs (vector <int> & a, int k) {
    
    map <int, int> hashmap = map_given_values_as_one(a);
    
	int num_pairs = 0;
	for (auto i : a) {
		if (hashmap [i + k] == 1) { 
		    num_pairs++;
		}
	}
	return (num_pairs);
}


int main() {
    int res;
    
    int array_size, k;
    cin >> array_size >> k;
    vector<int> numbers;
    for (int i=0;  i < array_size; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    
    cout << pairs(numbers, k);
      
    return 0;
}