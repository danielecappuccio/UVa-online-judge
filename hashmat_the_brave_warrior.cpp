/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <cstdio>

int main(){
    long long a, b, tmp;
    while (scanf("%lld %lld", &a, &b) != EOF){
        if (a < b) printf("%lld\n", b-a);
        else printf("%lld\n", a-b);
    }
    return 0;
}
