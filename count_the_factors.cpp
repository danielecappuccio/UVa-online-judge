/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#define MAXVALUE 1000001

using namespace std;

void SieveOfEratosthenes(bool prime[], int n){
    for (int p = 2; p*p <= n; ++p){
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p
            for (int i = p*2; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N, i, ans;

    bool prime[MAXVALUE];
    for (i = 1; i < MAXVALUE; ++i)
        prime[i] = true;

    SieveOfEratosthenes(prime, MAXVALUE);

    cin >> N;
    do {
        ans = 0;
        for (i = 2; i <= N; ++i){
            if (N % i == 0 && prime[i]) ++ans;
        }
        cout << N << " : " << ans << endl;
        cin >> N;
    } while (N != 0);

    return 0;
}