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
    int T, t; long long int n;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> n;
        if (n % 3 == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}