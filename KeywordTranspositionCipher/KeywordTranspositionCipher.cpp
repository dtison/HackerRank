#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


/*vector<int>  GetAllTheNumbers(const int & n) {
    vector<int>  numbers;
    // Indexing at 1 not 0, add filler space
    numbers.push_back(0);
    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    return numbers;
}

bool IsInvolution(vector<int> numbers) {
    bool is_involution = true;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[numbers[i]] != i) {
            is_involution = false;
            break;
        }
    }
    return is_involution;
}*/

/*
 *

 SECRT
ABDFG
HIJKL
MNOPQ
UVWXY
Z

 *
 *
 */

string RemoveDups(const string & keyword) {
    set<char> chars;
    for (auto & c: keyword) {
        chars.insert(c);
    }

    for (auto & c: keyword) {
        if (chars.count(c)) {
            cout << c << "is in " << keyword << endl;
        }
    }



    for (auto & c: chars) {
        cout << c << endl;
    }
cout << "done " << endl;
    string s;
    return s;
}

vector<char> GetSubstitutionAlphabet (const string & keyword, const string & cipher_text) {
    vector<char> result;
    string keyword_nodups = RemoveDups(keyword);


    return result;
}


int main() {
    int n;
    cin >> n;

    while (n--) {
        string keyword, cipher_text;
        cin >> keyword;
        cin.ignore();
        getline(cin, cipher_text);

    //    cout << keyword << " " << cipher_text << " " << n <<  endl;
        GetSubstitutionAlphabet (keyword, cipher_text);
        cout << "After GetSub " << endl;

    }

/*
    vector<int> numbers = GetAllTheNumbers(n);

    cout << (IsInvolution(numbers) ? "YES" : "NO");*/

    return 0;
}


//cout << numbers[numbers[i]] << " " << i << endl;
