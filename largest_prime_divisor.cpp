/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;

long* sieve_of_Eratosthenes(long* table, long size){

    long* primes = (long*)malloc(size*sizeof(long));
    long p=0;

    for (long i=2; i<size; ++i){
        if (table[i] != 0){
            primes[p++] = i;
            for (long j=2*i; j<size; j+=i) table[j] = 0;
        }
    }

    return primes;
}

int main(){
    long MAX_N = 10000000;
    long* table = (long*)malloc(MAX_N * sizeof(long));
    for (long k=0; k<MAX_N; ++k) table[k] = k;
    long* primes = sieve_of_Eratosthenes(table, MAX_N);
    free(table);

    long long N;
    long prime_divisors, max_prime_divisor, sqrtN;

    while (1){
        cin >> N;
        if (!N) break;
        if (N<0) N=-N;
        sqrtN = sqrt(N);
        prime_divisors = 0;
        max_prime_divisor = 1;
        for (long p=0; primes[p]<=sqrtN; p++){
            if (N % primes[p] == 0){;
                prime_divisors++;
                max_prime_divisor = primes[p];
                while (N % primes[p] == 0){
                    N /= primes[p];
                }     
                sqrtN = sqrt(N);           
            }
        }

        if (N != 1){
            prime_divisors++;
            max_prime_divisor = N;
        }

        if (prime_divisors < 2) printf("-1\n");
        else printf("%ld\n", max_prime_divisor);
    }
    return 0;
}
