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
#include <map>

using namespace std;


map<int, int>  GetAllTheNumbers(const int & n) {
    map<int, int>  numbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers[number]++;
    }
    return numbers;
}

/*
 * bool AllNumbersCountDoesNotExceedOne(map<int, int> & numbers) {
    for (map<int, int>::iterator it = numbers.begin(); it != numbers.end(); ++it)  {
        if (it->second > 1) {
            return false;
        }
    }
    return true;
}
 */

int main() {
    int n;
    cin >> n;

    map<int, int> numbers = GetAllTheNumbers(n);
    cout << (numbers.size() == n  ? "YES" : "NO");

//    cout << (AllNumbersCountDoesNotExceedOne(numbers) == true ? "YES" : "NO");

    return 0;
}


