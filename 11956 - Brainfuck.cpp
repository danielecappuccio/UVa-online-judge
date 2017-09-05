/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); //faster I/O

    char c; int T, D[100], ptr, i, j;
    string s;
    s.reserve(100000+1);

    cin >> T;

    cin.ignore();
    for (i = 0; i < T; ++i) {
    
        ptr = 0;
        fill(D, D+100, 0);
        getline(cin, s);

        for (string::iterator it = s.begin(); it != s.end(); ++it) {
            c = *it;
            switch (c) {
                case '+': D[ptr] = (D[ptr] < 255) ? D[ptr] + 1 : 0; break;
                case '-': D[ptr] = (D[ptr] > 0) ? D[ptr] - 1 : 255; break;
                case '>': ptr = (ptr < 99) ? ptr + 1 : 0; break;
                case '<': ptr = (ptr > 0) ? ptr - 1 : 99; break;
            }
        }

        cout << "Case " << dec << i + 1 << ": ";
        cout << setfill('0') << hex << uppercase;
        cout << setw(2) << D[0];
        for (j = 1; j < 100; ++j) {
            cout << " " << setw(2) << D[j];
        }
        cout << endl;
    }

    return 0;
}