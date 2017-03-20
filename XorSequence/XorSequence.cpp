#include <iostream>
#include <numeric>

using namespace std;

/*
 *
 *  This exploits a property of xor.
 *  Basically as array A is being simulated, a pattern emerges
 *  as shown in the array options[].
 *   because of this only the first and last (l, r) values need to be xor'd as f(l) ^ f(r-1),
 *   f being the simple phase-based function below.
 *
 */
int64_t getNextA (int64_t index) {

    int64_t options[] = {index, index, 2, 2, index + 2, index + 2, 0, 0};
    return options[index % 8];

}

int main() {

    int q;
    cin >> q;

    while (q--) {
        int64_t l, r;
        cin >> l >> r;
        cout << (getNextA(r)^getNextA(l-1)) << endl;
    }

    return 0;
}
