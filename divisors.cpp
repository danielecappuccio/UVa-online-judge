/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, L, U, i, j, tmp, counter, ans;
    float sqroot;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> L >> U;
        ans = L; tmp = 0;
        for (i = L; i <= U; ++i){
            sqroot = pow(i, 0.5);
            counter = 0;
            for (j = 1; j <= sqroot; ++j){
                if (i % j == 0){
                    ++counter;
                    if (j < sqroot) ++counter;
                }
            }
            
            if (counter > tmp){
                tmp = counter;
                ans = i;
            }
        }

        cout << "Between " << L << " and " << U << ", " << ans <<" has a maximum of " << tmp << " divisors." << endl;
    }

    return 0;
}