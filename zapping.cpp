/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib> //abs()

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int a, b, tmp;

    while (true){
        cin >> a >> b;
        if (a == -1) break;

        tmp = abs(b - a);
        if (tmp < 51) cout << tmp << endl;
        else cout << 100 - tmp << endl;
    }

    return 0;
}