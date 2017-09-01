/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>

#define MAX 10000
#define DEBUG 0

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O

    long long int N, tmp = 1;
    long long int last[MAX];
    last[1] = 1;
    for (int i = 2; i <= MAX; ++i){
        tmp = i * tmp;
        while (tmp % 10 == 0)
            tmp /= 10;
        tmp %= 100000;
        last[i] = tmp % 10;
        if (DEBUG) cout << "[DEBUG] Last non-zero digit of " << i << "! is " << last[i] << endl;
    }

    while (cin >> N){
        cout << setw(5) << N << " -> " << last[N] << endl;
    }

    return 0;
}