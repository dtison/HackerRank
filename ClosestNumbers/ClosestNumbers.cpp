#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
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
using namespace std;

struct element {
    int diff;
    pair <int, int> numbers;
    element (const int a, const int b) {
      //  const int smaller = a, bigger = b;
        numbers = make_pair (a,b);
     //   diff = abs(a) - abs(b);
        diff = abs (a - b);
    }
};

struct elementcomp {
    bool operator() (const element & lhs, const element & rhs) const
    {return lhs.diff < rhs.diff;}
};


/*
class data_pair {
public:
    int value;
    string text;
    data_pair (const int value, const string text) : value(value), text(text) {}
};



struct paircomp {
    bool operator() (const data_pair & lhs, const data_pair & rhs) const
    {return lhs.value < rhs.value;}
};
*/


int main() {
    int n;
    cin >> n;

    multiset<element, elementcomp> values_multi;

    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    for (auto & number: numbers) {
        cout << number << endl;
    }

    for (int i = 0; i < (numbers.size() - 1); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            element e(numbers[i], numbers[j]);
            values_multi.insert(e);
        }
    }

    for (auto & value: values_multi) {
        cout << "{" << value.numbers.first << ", " << value.numbers.second << " = " << value.diff << "}"  << endl;
    }

  //  int min_diff, current_diff = (*values_multi.begin()).diff;

/*    element first = *values_multi.begin();
    int min_diff = first.diff;*/


    multiset<element, elementcomp>::iterator multi_iterator = values_multi.begin();
    int min_diff = (*multi_iterator).diff;
    int current_diff = min_diff;

  //  int min_diff2 = (*values_multi.begin()).diff;

    cout << "min diff is " << min_diff << endl;

    while (current_diff == min_diff) {
        element e = *multi_iterator;
        cout << e.numbers.first << " " << e.numbers.second << " ";
        multi_iterator++;
        current_diff = (*multi_iterator).diff;
    }





    return 0;

/*    for (auto & data: values_multi) {
        cout << data.text << " ";
    }*/
    return 0;

}
