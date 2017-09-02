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
    long long int n;

    cin >> n;
    do {
        if (n == 1) cout << "0%" << endl;
        else cout << n * 25 << "%" << endl;
        cin >> n;
    } while (n >= 0);

    return 0;
}