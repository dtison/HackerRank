#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string input;
    cin >> input;
    int shift;
    cin >> shift;

    for_each(input.begin(), input.end(), [shift](char & c){ cout << (char) ('0' + (c + shift - '0') % 10); });

    return 0;
}

