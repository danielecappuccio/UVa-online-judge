/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

#define HUMBLES 5842

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O

    int humbles[HUMBLES];    
    int N, f2 = 0, f3 = 0, f5 = 0, f7 = 0, r, t;
    
    humbles[0] = 1;
    
    for (int i = 1; i < HUMBLES; ++i){
        humbles[i] = min(min(2 * humbles[f2], 3 * humbles[f3]), min(5 * humbles[f5], 7 * humbles[f7]));        
        if (humbles[i] == 2 * humbles[f2]) ++f2;
        if (humbles[i] == 3 * humbles[f3]) ++f3;
        if (humbles[i] == 5 * humbles[f5]) ++f5;
        if (humbles[i] == 7 * humbles[f7]) ++f7;
    }

    cin >> N;
    do {

        cout << "The " << N;
        r = N % 10;
        t = (N / 10) % 10;

        if (r == 1 && t != 1) cout << "st";
        else if (r == 2 && t != 1) cout << "nd";
        else if (r == 3 && t != 1) cout << "rd";
        else cout << "th";

        cout << " humble number is " << humbles[N - 1] << "." << endl;

        cin >> N;
    } while (N != 0);

    return 0;
}