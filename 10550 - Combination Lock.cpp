/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int getDist(int a, int b) {
    return (40 + a - b) % 40;
}

int toDegree(int dist) {
    return dist*9;
}

int main() {

    int pos, c1, c2, c3, count;
  
    while(true) {
        cin >> pos >> c1 >> c2 >> c3;
        if(!pos && !c1 && !c2 && !c3) break;
    
        count = 1080 + toDegree(getDist(pos, c1) + getDist(c2, c1) + getDist(c2, c3));
    
        cout << count << endl;
    }
    
    return 0;
}