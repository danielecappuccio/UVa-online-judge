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
    int T, t, N, n, ans, tmp;

    cin >> T;

    for (t = 0; t < T; ++t){
        cin >> N;
        for (n = 0; n < N; ++n){
            if (n == (N - 1) / 2) cin >> ans;
            else cin >> tmp;
        }

        cout << "Case " << t + 1 << ": " << ans << endl;
    }

    return 0;
}