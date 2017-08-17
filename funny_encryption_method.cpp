/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

int b1(int n){
    int res = 0;
    
    while(n){
        if(n & 1) ++res;
        n >>= 1;
    }
    
    return res;
}

int d[4];

int b2(int n){
    int sz = 0;
    
    while(n){
        d[sz++] = n%10;
        n /= 10;
    }
    
    int m = 0;
    
    for(int i = 0; i < sz; ++i)
        m = m * 16 + d[i];
    
    return b1(m);
}

int main(){

    int N, n, M, hexa;

    std::cin >> N;
    
    for (n = 0; n < N; ++n){
        std::cin >> M;
        std::cout << b1(M) << " " << b2(M) << std::endl;
    }

    return 0;
}