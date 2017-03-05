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


vector<pair<int, int>>  GetAllTheNumbers(const int & n) {
    vector<pair<int, int>>  numbers;
    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;
        numbers.push_back(make_pair(i, number));
    }
    return numbers;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> numbers = GetAllTheNumbers(n);

    sort(numbers.begin(), numbers.end(),
         [](const pair<int, int> & a, const pair<int, int> & b) {
             return a.second < b.second;
         });

    for (auto & number: numbers) {
        cout << number.first << endl;
    }

    return 0;
}


