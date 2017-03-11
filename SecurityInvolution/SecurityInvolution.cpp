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

bool IsInvolution(vector<int> numbers) {
    bool is_involution = true;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[numbers[i]] != i) {
            is_involution = false;
            break;
        }
    }
    return is_involution;
}


int main() {
    int n;
    cin >> n;

    vector<int> numbers = GetAllTheNumbers(n);

    cout << (IsInvolution(numbers) ? "YES" : "NO");

    return 0;
}


//cout << numbers[numbers[i]] << " " << i << endl;
