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

#define PI acos(-1)

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    
    double l, x;
    double conv = sin(72 * PI / 180) / sin(63 * PI / 180);
    
    while (cin >> l){
        x=conv*l;
        cout << setprecision(10) << fixed << x << endl;
    }

    return 0;
}