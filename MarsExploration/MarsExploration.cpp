#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string message;
    cin >>message;

    int number_sos = message.size()  / 3;

    int number_errors = 0;
    // This version doesn't use pointers
    for (int i = 0; i < number_sos; i++) {
        int offset = 3 * i;
        if (message[offset] != 'S') {
            number_errors++;
        }
        if (message[offset + 1] != 'O') {
            number_errors++;
        }
        if (message[offset + 2] != 'S') {
            number_errors++;
        }
    }
    cout << number_errors << endl;

    return 0;
}
