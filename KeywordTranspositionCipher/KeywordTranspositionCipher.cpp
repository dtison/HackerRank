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

    const int num_rows = (26 + keyword_nodups.size() - 1) / keyword_nodups.size();
    cout << " num_rows is " << num_rows << endl;
    vector<vector<char>> temp_alphabet(num_rows, vector<char> (keyword_nodups.size()));

    // Build up the substitution alphabet - first row
    for (int i = 0; i < keyword_nodups.size(); i++) {
        temp_alphabet[0][i] = keyword_nodups[i];
    }


    cout << "---- keyword_sorted 2 size: " << keyword_sorted.size() << endl;
    for (auto & c: keyword_sorted) {
        cout << c.first << endl;
    }

    map<char, int> keyword_sorted2 = keyword_sorted;



    // Remaining rows
    int row = 1;
    int col = 0;
    for (char c = 'A'; c <= 'Z'; c++) {
        if (keyword_sorted != keyword_sorted2) {
            cout << "SOMETHING WENT WRONG " << endl;
        }
        if (keyword_sorted[c] == 0) {
        //    cout << " SETTING " << c << " row " << row << " col " << col << endl;
            temp_alphabet[row][col] = c;
            col++;
            if (col == keyword_nodups.size()) {
                row++;
                col = 0;
            }
        }
    }
    cout << "---- keyword_sorted 3 size: " << keyword_sorted.size() << endl;
    for (auto & c: keyword_sorted) {
        cout << c.first << endl;
    }

  /*  cout << " TEMP ALPHABET: " << endl;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < keyword_nodups.size(); j++) {
            cout << temp_alphabet[i][j];
        }
    }*/


    cout << "---- keyword_sorted 4 size: " << keyword_sorted.size() << endl;
    for (auto & c: keyword_sorted) {
        cout << c.first << endl;
    }


    for (auto & c: keyword_sorted) {
        size_t pos = keyword_nodups.find(c.first);
        for (int i = 0; i < num_rows; i++) {
    //        cout << " for " << c.first << " pos" << pos << " setting " << temp_alphabet[i][pos] << " in sa " << endl;
            substitution_alphabet.append(1, temp_alphabet[i][pos]);
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
        string substitution_alphabet = GetSubstitutionAlphabet(keyword, cipher_text);

        cout << " FINAL SUBSTITUTION ALPHABET " << substitution_alphabet << endl;

        cout << endl;


 /*       string s = "CDJOWEBINVRFKPXSAHMUZTGLQY";
        if (substitution_alphabet != s) {
            cout << "NOT EQUAL" << " s len " << s.size() << " sa len " << substitution_alphabet.size();

        }
*/

        for (auto &c: cipher_text) {
            if (c != ' ') {
                size_t pos = substitution_alphabet.find(c);
           //     cout << "c  " << c << " found at pos " << pos << " in string " << substitution_alphabet << endl;
            }
        }
    }


    return 0;

}

