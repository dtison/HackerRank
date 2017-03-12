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

void SortKeywordAndRemoveDups(const string & keyword,
                              map<char, int> & keyword_sorted,
                              string & keyword_nodups) {
   // string keyword_nodups;

    for (auto & c: keyword) {
        if (keyword_sorted[c] < 1) {
            keyword_nodups.append(1, c);
            keyword_sorted[c]++;
        }
    }
}

string GetSubstitutionAlphabet (const string & keyword, const string & cipher_text) {
    string substitution_alphabet;

    map<char, int> keyword_sorted;
    string  keyword_nodups;
    SortKeywordAndRemoveDups(keyword, keyword_sorted, keyword_nodups);

    for (auto & c: keyword_sorted) {
        cout << c.first << endl;
    }

    // Build up the substitution alphabet
    for (auto & c: keyword_nodups) {
        substitution_alphabet.append(1, c);
    }


    for (char c = 'A'; c <= 'Z'; c++) {
        if (keyword_sorted[c] == 0) {
            substitution_alphabet.append(1, c);
        }
    }
    return substitution_alphabet;
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
        string substitution_alphabet = GetSubstitutionAlphabet (keyword, cipher_text);

        for (auto & c: substitution_alphabet) {
            cout << c;
        }
        cout << endl;


        //    for (int i = keyword_nodups.size(); i < 26; i++) {
        int row = 1;
        int col = 0;

/*        const int row = i / keyword_nodups.size();
        const int col = i - (row * keyword_nodups.size());*/

    }

/*
    vector<int> numbers = GetAllTheNumbers(n);

    cout << (IsInvolution(numbers) ? "YES" : "NO");*/

    return 0;
}


//cout << numbers[numbers[i]] << " " << i << endl;
