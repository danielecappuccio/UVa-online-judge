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

    ios::sync_with_stdio(false); //faster I/O
    long long int a, b, c, d, e, ans;

    cin >> a >> b >> c >> d >> e;
    do {
        ans = a * b * c * d * d * e * e;
        cout << ans << endl;

        cin >> a >> b >> c >> d >> e;
    } while (a || b || c || d || e);

    return 0;
}

