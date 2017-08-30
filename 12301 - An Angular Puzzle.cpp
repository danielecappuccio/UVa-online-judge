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

    int a, b, c, d, e;
    double B,C,D,E;
    double k, x;
    double conv = M_PI / 180;
    
    cin >> a >> b >> c >> d >> e;
    do {        
        if (a + b + c + d + e != 180) cout << "Impossible" << endl;
        else{
            B = b * conv;
            C = c * conv;
            D = d * conv;
            E = e * conv;
            
            k = sin(C) * sin(D) * sin(B + C + E) / (sin(B) * sin(E) * sin(C + D + E));
            x = atan(sin(C + E) / (k + cos(C + E)));
            
            cout << setprecision(2) << fixed << x / conv << endl;
        }
        cin >> a >> b >> c >> d >> e;
    } while (a != 0);
    
    return 0;
}