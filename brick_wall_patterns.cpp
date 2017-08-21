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

    long long int ans[50];
    int i, N;

    ans[0] = 1; ans[1] = 2;
    for (i = 2; i < 50; ++i)
        ans[i] = ans[i - 1] + ans[i - 2];

    while (true){
        cin >> N;
        if (N == 0) break;

        cout << ans[N - 1] << endl;
    }

    return 0;
}