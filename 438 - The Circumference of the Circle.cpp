/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
 
#define PI 3.141592653589793
 
using namespace std;

int main(){
 
    ios::sync_with_stdio(false); //faster I/O
 
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double a, b, c, s, area, diameter, circ;
  
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
 
        a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
 
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        diameter = (a * b * c) / (2 * area);
        circ = PI * diameter;
 
        cout << setprecision(2) << fixed << circ << endl;
    }
 
    return 0;
}