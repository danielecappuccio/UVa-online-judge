/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <cstdio>
#include <string.h>
 
using namespace std;

int main(){

    char s[15];
    int n;
 
    while (scanf("%s", s), s[0] != '-'){

        if(strlen(s) > 2 && (s[1] == 'x' || s[1] == 'X')){
            sscanf(s, "%x", &n);
            printf("%d\n", n);
        }
        else {
            sscanf(s, "%d", &n);
            printf("0x%X\n", n);
        }

    }
    
    return 0;
}