/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>

#define MAX 1000000

using namespace std;

int sum_digits(int x){
    string s = to_string(x);
    int ans = 0;
    for (string::iterator it = s.begin(); it < s.end(); ++it){
        ans += (*it) - '0';
    }
    return ans;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    bool generators[MAX + 1]; int i, j;
    for (i = 1; i <= MAX; ++i)
        generators[i] = true;


    for (i = 1; i <= MAX; ++i){

        if (generators[i]){

            cout << i << endl;
            j = i + sum_digits(i);

            while (j <= MAX && generators[j]){
                generators[j] = false;
                j += sum_digits(j);
            }
        }
    }

    return 0;
}