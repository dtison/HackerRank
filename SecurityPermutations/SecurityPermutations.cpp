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


vector<int>  GetAllTheNumbers(const int & n) {
    vector<int>  numbers;
    // Indexing at 1 not 0, add filler space
    numbers.push_back(0);
    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    return numbers;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers = GetAllTheNumbers(n);

    for (int i = 1; i <= n; i++) {
        cout << numbers[numbers[i]] << endl;
    }

    return 0;
}


