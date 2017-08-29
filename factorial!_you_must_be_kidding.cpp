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
    while (cin >> N){
        if ((N >= 0 && N <= 7) || (N < 0 && N % 2 == 0)) cout << "Underflow!" << endl;
        else if (N == 8) cout << "40320" << endl;
        else if (N == 9) cout << "362880" << endl;
        else if (N == 10) cout << "3628800" << endl;
        else if (N == 11) cout << "39916800" << endl;
        else if (N == 12) cout << "479001600" << endl;
        else if (N == 13) cout << "6227020800" << endl;
        else cout << "Overflow!" << endl;
    }

    return 0;
}