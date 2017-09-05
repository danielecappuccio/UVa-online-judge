/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>
#define PI 3.1415926535

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    int T, t;
    double D, N;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> D >> N;
        cout << "Case " << t + 1 << ": " << setprecision(3) << fixed << 2 * PI * ((D / (N - 1)) + D) << endl;
    }

    return 0;
}