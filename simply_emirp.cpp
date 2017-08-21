/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

bool is_prime(int N){
    if (N <= 2) return true;
    if (N % 2 == 0) return false;
    int i;
    for (i = 3; i < N / 2; i += 2){
        if (N % i == 0) return false;
    }

    return true;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N, r; string str;

    while (scanf("%d", &N) == 1){
        if (! is_prime(N)) cout << N << " is not prime." << endl;
        else {
            str = to_string(N);
            reverse(str.begin(), str.end());
            r = stoi(str);

            if (r == N) cout << N << " is prime." << endl;
            else if (! is_prime(r)) cout << N << " is prime." << endl;
            else cout << N << " is emirp." << endl;
        }
    }

    return 0;
}