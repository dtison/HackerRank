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

int number_set_bits (unsigned long long int value) {
	int count = 0 ;
    while(value) {
    	value &= (value - 1) ;
        count ++ ;
    }
    return count ;
}

int main() {

    int num_tests;
    cin >> num_tests;
    for (int i = 0; i < num_tests; i++) {
        unsigned long long int value ;
        cin >> value;

        string winner = (number_set_bits(value - 1) & 1) ? "Louise" : "Richard";
        cout << winner << endl;
    }
    return 0;
}