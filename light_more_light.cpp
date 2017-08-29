/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    unsigned int n;
    unsigned int x;
    
    while(1){
        scanf("%u",&n);
        if(!n) break;
        
        x = sqrt(n);
        
        if(n == x*x) printf("yes\n");
        else printf("no\n");
    }   
    return 0;
}
