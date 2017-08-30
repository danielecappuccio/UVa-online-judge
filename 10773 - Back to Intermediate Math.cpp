/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){    

    ios::sync_with_stdio(false); //faster I/O

    double d, v, u, t1, t2;
    int T;
    
    cin >> T;
    for(int t = 0; t < T; ++t){

        cin >> d >> v >> u;
        
        if (v >= u || u == 0 || v == 0){
            cout << "Case " << t + 1 << ": can't determine" << endl;
            continue;
        }
        
        t1 = d / u;
        t2 = d / sqrt(u * u - v * v);
        
        cout << "Case " << t + 1 << ": " << setprecision(3) << fixed << fabs(t1 - t2) << endl;
    }

    return 0;
}