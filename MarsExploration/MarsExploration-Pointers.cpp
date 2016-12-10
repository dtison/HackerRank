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
    const char *message_str = message.c_str();

    int number_errors = 0;
    for (int i = 0; i < number_sos; i++) {
        if (message_str[0] != 'S') {
            number_errors++;
        }
        if (message_str[1] != 'O') {
            number_errors++;
        }
        if (message_str[2] != 'S') {
            number_errors++;
        }
        message_str += 3;
    }
    cout << number_errors << endl;

    return 0;
}