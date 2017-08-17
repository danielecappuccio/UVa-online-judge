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

    ios::sync_with_stdio(false); //faster I/O
    int A, B, C, x, y, z;

    while (true){

        cin >> A >> B >> C;
        if (!A && !B && !C) break;

        x = A*A; y = B*B; z = C*C;

        if (x + y == z || x + z == y || y + z == x) cout << "right";
        else cout << "wrong";

        cout << endl;
    }

    return 0;
}