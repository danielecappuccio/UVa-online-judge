/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

#define MAX_VALUE 13

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O

    unsigned long long int wrong[MAX_VALUE], factorial[MAX_VALUE];
    int i;

    wrong[2] = 1;
    wrong[3] = 2;
    for (i = 4; i < MAX_VALUE; ++i)
        wrong[i] = (i - 1) * (wrong[i - 1] + wrong[i - 2]);
    
    factorial[0] = 1;
    for (i = 1; i < MAX_VALUE; ++i)
        factorial[i] = i * factorial[i - 1];
    
    int T, t, n;
    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> n;
        cout << wrong[n] << "/" << factorial[n] << endl;
    }

    return 0;
}