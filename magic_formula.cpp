/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int calculate_value(int a, int b, int c, int x){
    return a*x*x + b*x + c;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O

    int a, b, c, d, L, x, tmp, count;
    cin >> a >> b >> c >> d >> L;
    do {
        count = 0;
        for (x = 0; x <= L; ++x){
            tmp = calculate_value(a, b, c, x);
            if (tmp % d == 0) ++count;
        }

        cout << count << endl;
        cin >> a >> b >> c >> d >> L;
    } while (a || b || c || d || L);

    return 0;
}