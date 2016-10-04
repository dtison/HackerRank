#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int size, int rotation) {
    vector<int> temp(size);
    for (int i=0; i < size; i++){
        temp[i] = a[(i + rotation) % size];
    }


    return temp;
}

int main(){
    int size;
    int rotation;
     cin >> size >> rotation;

     vector<int> a(size);

     for(int a_i = 0; a_i < size; a_i++){
         cin >> a[a_i];
    }


    vector<int> output = array_left_rotation (a, size, rotation);
    for(int i = 0; i < size; i++)
        cout << output[i] << " ";

    cout << endl;
    return 0;
}
