/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>

#define X 101

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N, M, i, j, tmp;
    unsigned long long int a[X][X];

    a[1][1] = 1;
    a[1][0] = 1;

    for (i = 2; i <= 100; i++){
        a[i][0] = 1;
        for (j = 1; j <= i; j++){
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }

    cin >> N >> M;
    do {
        if (M > N/2) tmp = N - M;
        else tmp = M;
        cout << N << " things taken " << M << " at a time is " << a[N][tmp] << " exactly." << endl;
        cin >> N >> M;
    } while (N != 0 && M != 0);

    return 0;
}
