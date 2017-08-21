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
    int T, t;
    long long int a, b, c;

    cin >> T;
    for (t = 0; t < T; ++t){

        cin >> a >> b >> c;
        cout << "Case " << t + 1 << ": ";

        if (a <= 0 || b <= 0 || c <= 0) cout << "Invalid" << endl;
        else if (a + b <= c || a + c <= b || b + c <= a) cout << "Invalid" << endl;
        else if (a == b && b == c) cout << "Equilateral" << endl;
        else if (a == b || b == c || a == c) cout << "Isosceles" << endl;
        else cout << "Scalene" << endl;
    }

    return 0;
}