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

int sum_from_range (const vector<int> & numbers, int begin, int end) {
    int sum = 0;
    for (int i = begin; i <= end; i++) {
        sum += numbers[i];
    }
    return sum;
}

bool check_sherlock_array (const vector<int> & numbers) {
    bool is_sherlock_array = false;
    if (numbers.size() == 1) {
        is_sherlock_array = true;
    } else {
        int left_sum = numbers[0];
        int right_sum = sum_from_range (numbers, 2, numbers.size() - 1);
        
        for (int i = 1; i < (numbers.size() - 1) && ! is_sherlock_array; i++) {
            if (left_sum == right_sum) {
                is_sherlock_array = true;
            } else {
                left_sum += numbers[i];
                right_sum -= numbers[i + 1];
            }
        }
    }
    return is_sherlock_array;
}





int main() {
    int num_tests;
    cin >> num_tests;
    
    for (int i = 0; i < num_tests; i++) {
        int num_elements;
        cin >> num_elements;       
        vector<int> numbers;
        for (int j = 0; j < num_elements; j++) {
            int number;
            cin >> number;
            numbers.push_back(number);
        }
        if (check_sherlock_array (numbers)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        };        
         
        numbers.clear();
    }

    return 0;
}