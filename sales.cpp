/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, N, n, i, c;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> N;
        int* A = (int*)malloc(N * sizeof(int));
        for (n = 0; n < N; ++n)
            cin >> A[n];
        
        int* B = (int*)malloc(N * sizeof(int));
        B[0] = 0;

        for (n = 1; n < N; ++n){
            c = 0;
            for (i = 0; i < n; ++i){
                if (A[i] <= A[n]) ++c;
            }
            B[n] = c;
        }

        c = 0;
        for (n = 1; n < N; ++n)
            c += B[n];
        
        cout << c << endl;
    }

    return 0;
}
