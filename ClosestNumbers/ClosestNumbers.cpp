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


vector<int>  GetAllTheNumbers(const int n) {
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    return numbers;
}

int GetMinDiff(const vector<int> numbers) {

    int min_diff = numbers[1] - numbers[0];
    for (int i = 1; i < numbers.size() - 1; i++) {
        int test_diff = numbers[i + 1] - numbers[i];
        if (min_diff > test_diff) {
            min_diff = test_diff;
        }
    }
    return min_diff;
}

void DisplayLowestPairs (const vector<int> numbers, const int min_diff) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] == min_diff) {
            cout << numbers[i] << " " << numbers[i + 1] << " ";
        }
    }

}

int main() {
    int n;
    cin >> n;

    vector<int> numbers = GetAllTheNumbers(n);

    sort(numbers.begin(), numbers.end());

    int min_diff = GetMinDiff(numbers);

    DisplayLowestPairs(numbers, min_diff);

    return 0;
}
