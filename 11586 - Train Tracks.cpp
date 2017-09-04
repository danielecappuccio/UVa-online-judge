/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int strToType(string s) {
    if (s[0] == s[1]) {
        if (s[0] == 'M') return 1;
        return 2;
    }
    return 0;
}

int main() {

    ios_base::sync_with_stdio(false); //faster I/O

    string s;
    int T, t, i, j, len, c[3];
    cin >> T;

    cin.ignore();
    for (i = 0; i < T; i++) {
        c[0] = 0, c[1] = 0, c[2] = 0;
        getline(cin, s);
        len = s.size();

        for (j = 0; j < len; j += 3) {
            while (s[j] == ' ') j++;
            t = strToType(&s[j]);
            c[t]++;
        }

        if (c[1] != c[2] || (c[0] < 2 && c[1] == 0)) cout << "NO LOOP" << endl;
        else cout << "LOOP" << endl;
    }

    return 0;
}