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
    int s, d, T, t;
    cin >> T;
    for (t=0; t<T; ++t){
        cin >> s >> d;
        if (s < d || (s + d) % 2 == 1) cout << "impossible" << endl;
        else {
            cout << (s+d)/2 << " " << (s-d)/2 << endl;
        }
    }
    return 0;
}