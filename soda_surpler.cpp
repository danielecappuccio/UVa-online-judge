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
    int T, t, e, f, c, ans;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> e >> f >> c;
        ans = 0;
        e += f;

        while (e >= c){
            ans += e/c;
            e = e/c + e%c;
        }

        cout << ans << endl;
    }

    return 0;
}
