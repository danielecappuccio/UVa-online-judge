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
#include <string>

#define PI acos(-1)

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O 
    
    int s, a;
    double alpha, d, L;
    string unid;   
      
    while(cin >> s >> a >> unid){
        if (unid == "deg") alpha = a * PI / 180;
        else if (unid == "min") alpha = a * PI / 180 / 60;
        
        alpha = fmin (alpha, 2 * PI - alpha);
        
        L = (6440 + s) * alpha;
        d = 2 * (6440 + s) * sin(alpha / 2);
        
        cout << setprecision(6) << fixed << L << " " << d << endl;
    }
    
    return 0;
}