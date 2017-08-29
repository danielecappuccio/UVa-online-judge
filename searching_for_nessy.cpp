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
    int N, r, c, internal_r, internal_c, sonars;
    cin >> N;
    for (int i=0; i<N; ++i){
        sonars = 0;
        cin >> r >> c;
        internal_r = r-2;
        internal_c = c-2;
        for (int j=0; j<((internal_r-1)/3)+1; ++j){
            for (int k=0; k<((internal_c-1)/3)+1; ++k){
                sonars++;
            }
        }
        cout << sonars << endl;
    }
    return 0;
}
