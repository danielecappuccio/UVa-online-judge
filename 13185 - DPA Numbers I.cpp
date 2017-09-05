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

    int T, t, N, i, s;
    cin >> T;
    
    for (t = 0; t < T; ++t){
        cin >> N;
        s = 1; //m % 1 == 0 for every integer m
        for (i = 2; i <= N / 2; ++i){
            if (N % i == 0) s = s + i;
        }

        if (s > N) cout << "abundant" << endl;
        else if (s == N) cout << "perfect" << endl;
        else cout << "deficient" << endl;        
    }

    return 0;
}