#include <iostream>
#include <string>
using namespace std;

void DisplayLengths (const string & a, const string & b) {
    cout << a.size() << " " << b.size() << endl;
}

void DisplayConcatenation (const string & a, const string & b) {
    cout << a + b << endl;
}

void DisplayWithFirstCharsExchanged (const string & a, const string & b) {
    string temp_a = a;
    string temp_b = b;
    temp_a[0] = b[0];
    temp_b[0] = a[0];
    cout << temp_a << " " + temp_b << endl;
}

int main() {
    string a, b;
    
    cin >> a;
    cin >> b;
    
    DisplayLengths(a, b);
    DisplayConcatenation(a, b);
    DisplayWithFirstCharsExchanged (a, b);
    
    return 0;
}
