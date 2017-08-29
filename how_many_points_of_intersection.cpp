/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int main(){

    long long int T = 1, a, b;
    cin >> a >> b;
    do {
        cout << "Case " << T++ << ": " << (long long int) a * (a - 1) / 2 * b * (b - 1) / 2 << endl;
        cin >> a >> b;
    } while (a != 0);

    return 0;
}