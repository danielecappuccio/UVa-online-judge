/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 
#include <cstdio> 

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    
    int N; long long int res;

    while (scanf("%d", &N) == 1){
        res = 1;
        res = res * N * (N + 1) / 2;
        res = res * N * (N + 1) / 2;
        cout << res << endl;
    }

    return 0;
}
