/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>

#define DEBUG 0

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, C, d;
    float inc;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> C >> d;
        inc = (5.0f / 9.0f) * d;

        if (DEBUG) cout << "Increasing of: " << inc << endl;

        cout << "Case " << t + 1 << ": " << fixed << setprecision(2) << (float) C + inc << endl;
    }

    return 0;
}