/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
 
using namespace std;

long long int fermat_test(long long int a, long long int N, long long int mod){
    if (N == 0) return 1;
    long long int tmp = fermat_test(a, N / 2, mod) % mod;
    long long int _tmp = (tmp * tmp) % mod;
    if (N % 2 == 1) _tmp = (_tmp * a) % mod;
    return _tmp % mod;
}

bool is_prime(long long int N){
    if (N <= 3 || N == 5 || N == 7 || N == 11 || N == 13
        || N == 17 || N == 19 || N == 23 || N == 29 || N == 31 || N == 37 || N == 41
        || N == 43 || N == 47 || N == 53 || N == 59) return true;
    if (N % 2 == 0) return false;
    if (N % 3 == 0) return false;
    if (N % 5 == 0) return false;
    if (N % 7 == 0) return false;
    if (N % 11 == 0) return false;
    if (N % 13 == 0) return false;
    if (N % 17 == 0) return false;
    if (N % 19 == 0) return false;
    if (N % 23 == 0) return false;
    if (N % 29 == 0) return false;
    if (N % 31 == 0) return false;
    if (N % 37 == 0) return false;
    if (N % 41 == 0) return false;
    if (N % 43 == 0) return false;
    if (N % 47 == 0) return false;
    if (N % 53 == 0) return false;
    if (N % 59 == 0) return false;
    long long int i;
    for (i = 61; i < N / 61; i += 2){
        if (N % i == 0) return false;
    }

    return true;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    long long int N; bool carmichael;

    while (true){
        cin >> N;
        if (N == 0) break;
        
        if (is_prime(N)) cout << N << " is normal." << endl;
        else {
            carmichael = true;
            for (long long int a = 2; a < N; ++a){
                if (fermat_test(a, N, N) != a){
                    carmichael = false;
                    break;
                }
            }
            if (carmichael) cout << "The number " << N << " is a Carmichael number." << endl;
            else cout << N << " is normal." << endl;         
        }
    }

    return 0;
}