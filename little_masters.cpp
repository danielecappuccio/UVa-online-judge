/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t;
    float x, y, r, dist;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> x >> y >> r;
        dist = sqrt(x*x + y*y);

        cout << setprecision(2) << fixed << r - dist << " " << r + dist << endl;
    }

    return 0;
}