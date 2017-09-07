/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); //faster I/O

    int A, C, height, max = 0, last = 0, cut, i;
    cin >> A;

    do {
        cin >> C;

        cut = 0;
        last = A;

        for (i = 0; i < C; ++i) {
            cin >> height;
            if (height >= last) {
                last = height;
                continue;
            }
            cut += last - height;
            last = height;
        }
        cout << cut << endl;

        cin >> A;

    } while (A != 0);

    return 0;
}