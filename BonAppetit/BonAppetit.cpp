#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int num_items, ignore_item, billed_amount;
    cin >> num_items >> ignore_item;

    int annas_total = 0;
    int actual_total = 0;
    for (int i = 0; i < num_items; i++) {
        int value;
        cin >> value;
        if (i != ignore_item) {
            annas_total += value;
        }
        actual_total += value;
    }

    int annas_bill = annas_total >> 1;
    cin >> billed_amount;
    int overcharge = billed_amount - annas_bill;

    if (overcharge == 0) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << overcharge << endl;
    }

    return 0;
}