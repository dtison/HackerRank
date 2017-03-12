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


void DisplayDebugging (const string & keyword,
                        const map<char, int> & keyword_sorted,
                        const string & keyword_nodups,
                        const int num_rows,
                       const vector<vector<char>> temp_alphabet,
                       const string title = "UNTITLED" ) {

    cout << endl << "-------------  Debugging Info: " << title << "  --------------- " << endl;
    cout << "keyword: " << keyword << " nodups: " << keyword_nodups << endl;
    cout << "sorted: ";
    for (auto & c: keyword_sorted) {
        cout << c.first;
    }
    cout << endl;
    cout << "num_rows: " << num_rows << endl;
    cout << "temp_alphabet: " << endl;

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < keyword_nodups.size(); j++) {
            cout << temp_alphabet[i][j];
        }
        cout << endl;
    }
    cout << "-------------  END Debugging Info: " << title << "  --------------- " << endl << endl;


}


string GetSubstitutionAlphabet (const string & keyword, const string & cipher_text) {
    string substitution_alphabet;

    map<char, int> keyword_sorted;
    string  keyword_nodups;
    SortKeywordAndRemoveDups(keyword, keyword_sorted, keyword_nodups);


    const int num_rows = (26 + keyword_nodups.size() - 1) / keyword_nodups.size();

    vector<vector<char>> temp_alphabet(num_rows, vector<char> (keyword_nodups.size(), 32));

    // Build up the substitution alphabet - first row
    for (int i = 0; i < keyword_nodups.size(); i++) {
        temp_alphabet[0][i] = keyword_nodups[i];
    }

//DisplayDebugging(keyword, keyword_sorted, keyword_nodups, num_rows, temp_alphabet, "Just after First Row");

    /*
     * ostringstream os;
os << "dec: " << 15 << " hex: " << std::hex << 15 << endl;
cout<<os.str()<<endl;
     */



    // Remaining rows
    int row = 1;
    int col = 0;
    for (char c = 'A'; c <= 'Z'; c++) {

        if (keyword_sorted.find(c) == keyword_sorted.end()) {

            ostringstream os;

            temp_alphabet[row][col] = c;

            col++;

            if (col == keyword_nodups.size()) {
                row++;
                col = 0;
            }
        }
    }

 //   DisplayDebugging(keyword, keyword_sorted, keyword_nodups, num_rows, temp_alphabet, "After temp_alphabet created");


    for (auto & c: keyword_sorted) {
        size_t pos = keyword_nodups.find(c.first);
        for (int i = 0; i < num_rows; i++) {
    //        cout << " for " << c.first << " pos" << pos << " setting " << temp_alphabet[i][pos] << " in sa " << endl;
            if (temp_alphabet[i][pos] != ' ') {
                substitution_alphabet.append(1, temp_alphabet[i][pos]);
            }
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


        string substitution_alphabet = GetSubstitutionAlphabet(keyword, cipher_text);

/*
        cout << " FINAL SUBSTITUTION ALPHABET  " << substitution_alphabet << " size " << substitution_alphabet.size() << endl;
        cout << endl;
*/

        for (auto &c: cipher_text) {
            if (c != ' ') {
                size_t pos = substitution_alphabet.find(c);
                cout << (char) ('A' + pos);
           //     cout << "c  " << c << " found at pos " << pos << " in string " << substitution_alphabet << endl;
            } else {
                cout << c;
            }
        }
    }


    return 0;

}

