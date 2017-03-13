#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string input;
    cin >> input;

    for_each(input.begin(), input.end(), [](char & c){ cout << (char) (c == '9' ? '0' : c + 1); });

    return 0;
}
