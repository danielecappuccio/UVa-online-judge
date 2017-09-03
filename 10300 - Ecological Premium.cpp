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
    int T, S, A, E, n, b;
    cin >> T;
    for (int t=0; t<T; ++t){
        cin >> n;
        b = 0;
        for (int i=0; i<n; ++i){
            cin >> S >> A >> E;
            b += S*E;
        }
        cout << b << endl;
    }
    return 0;
}
