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
#include <cstdint>

using namespace std;


int64_t make_change (vector<int> coins, int money, int index, vector<vector<int64_t>> & cache);

int main(){

    int money, number_coins;

    // Get total money and # coins
    cin >> money >> number_coins;

    // Get the coins
    vector<int> coins(number_coins);
    for (int i = 0; i < number_coins; i++) {
         cin >> coins[i];
    }

    //  Sort in reverse order
    sort (coins.begin(), coins.end(), [](const int a, const int b) {return a > b; });

    // Setup cache
    vector<vector<int64_t>> cache;
    cache.resize(money + 1, vector<int64_t> (coins.size(), 0));

    cout << make_change (coins, money, 0, cache);
    cout << endl;

    return 0;
}

int64_t make_change (vector<int> coins, int money, int index, vector<vector<int64_t>> & cache) {

   if (index >= (coins.size() - 1)) {
        return (money % coins[index] == 0) ? 1 : 0;
    }

    // Try cache first
    if (cache[money][index] > 0) {
        return cache[money][index];
    }

    int64_t ret_val = 0;

    int denomination = coins[index];
    for (int subtotal = 0; subtotal <= money; subtotal += denomination) {
        ret_val += make_change(coins, money - subtotal, index + 1, cache);
    }

    // Save value in cache
    cache[money][index] = ret_val;
    return ret_val;
}
