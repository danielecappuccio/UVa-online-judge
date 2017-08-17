/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 

using namespace std;

int find_pow(int N){

    int res = 0;
    int x = 1;
    while (N > x){
        ++res;
        x *= 2;
    }
    
    return res;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N, res, c = 1;

    while (true){

        cin >> N;
        if (N < 0) break;

        res = find_pow(N);
        cout << "Case " << c << ": " << res << endl;

        ++c;

    }

    return 0;
}