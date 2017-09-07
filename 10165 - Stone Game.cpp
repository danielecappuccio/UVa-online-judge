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
    int N, i, x, ans;

    cin >> N;
    do {

        ans = 0;
        for (i = 0; i < N; ++i){
            cin >> x;
            ans = ans ^ x;
        }

        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;

        cin >> N;
    } while (N != 0);

    return 0;
}