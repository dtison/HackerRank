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


int main(){
    int house_begin;
    int house_end;
    cin >> house_begin >> house_end;
    int apple_tree;
    int orange_tree;
    cin >> apple_tree >> orange_tree;
    int num_apples;
    int num_oranges;
    cin >> num_apples >> num_oranges;
    vector<int> apples(num_apples);
    for(int i = 0; i < num_apples; i++){
       cin >> apples[i];
    }
    vector<int> oranges(num_oranges);
    for(int i = 0; i < num_oranges; i++){
       cin >> oranges[i];
    }

    int apples_on_house = 0;
    int oranges_on_house = 0;

    for (const int & apple: apples) {
        int fall_pos = apple_tree + apple;
        if (fall_pos >= house_begin && fall_pos <= house_end) {
            apples_on_house++;
        }
    }
    for (const int & orange: oranges) {
        int fall_pos = orange_tree + orange;
        if (fall_pos >= house_begin && fall_pos <= house_end) {
            oranges_on_house++;
        }
    }

    cout << apples_on_house << endl;
    cout << oranges_on_house << endl;

    return 0;
}