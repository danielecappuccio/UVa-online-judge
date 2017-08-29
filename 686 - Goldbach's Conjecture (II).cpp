/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

#define DEBUG 0
#define MAX_TEST_CASE 32768

using namespace std;

void SieveOfEratosthenes(bool values[], int n){
    for (int p = 2; p*p <= n; ++p){
        // If values[p] is not changed, then it is a prime
        if (values[p] == true) {
            // Update all multiples of p
            for (int i = p*2; i <= n; i += p)
                values[i] = false;
        }
    }
}

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    int p = 0, primes[MAX_TEST_CASE], n, i, j, k, ans;

    bool values[MAX_TEST_CASE];
    for (i = 1; i < MAX_TEST_CASE; ++i)
        values[i] = true;

    SieveOfEratosthenes(values, MAX_TEST_CASE);
    for (i = 2; i < MAX_TEST_CASE; ++i){
        if (values[i]){
            primes[p++] = i;
            if (DEBUG) cout << "Prime number: " << i << endl;
        }
    }

    cin >> n;
    do {

        ans = 0;

        for (j = 0; primes[j] <= n / 2; ++j){
            for (k = j; primes[k] < n; ++k){
                if (primes[j] + primes[k] == n){
                    if (DEBUG) cout << "Pair found: " << primes[j] << " + " << primes[k] << endl;
                    ++ans;
                }
            }
        }

        cout << ans << endl;

        cin >> n;
    } while (n != 0);

    return 0;
}