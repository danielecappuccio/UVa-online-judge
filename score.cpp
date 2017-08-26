/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, i, score, tmp;
    string s;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> s;
        score = tmp = 0;
        for (i = 0; i < s.size(); ++i){
            if (s[i] == 'O'){
                ++tmp;
                score += tmp;
            }
            else tmp = 0;
        }

        cout << score << endl;
    }   

    return 0;
}