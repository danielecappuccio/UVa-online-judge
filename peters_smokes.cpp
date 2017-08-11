/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n, k, cyg, rest;

    while (scanf("%d %d", &n, &k) == 2) {
        cyg = 0;
        rest = 0;
        while (n > 0){
            cyg += n;
            rest += n;
            n = rest/k;
            rest %= k;
        }
        cout << cyg << endl;
    }

    return 0;
}