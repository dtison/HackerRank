#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> values;
    stringstream sstream(str);
    int value;
    char comma;
    
    do {
        sstream >> value;
        sstream >> comma;
        values.push_back(value);
    } while (! sstream.eof());
    
    return values;   
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}