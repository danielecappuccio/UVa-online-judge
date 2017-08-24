/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O

    int N;
    while (true){
        cin >> N;
        if (N == 0) break;

        cout << (N * (N + 1) * (2*N + 1)) / 6 << endl;
    }

    return 0;
}