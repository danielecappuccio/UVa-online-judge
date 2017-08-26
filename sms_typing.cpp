/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*
---------------------
|   | abc | def     |
---------------------
| ghi | jkl | mno   |
---------------------
| pqrs | tuv | wxyz |
---------------------
|       | <SP>|     |
---------------------
*/

int main(){

    int keypress[128];
    keypress['a'] = keypress['d'] = keypress['g'] = keypress['j'] = keypress['m'] = keypress['p'] = keypress['t'] = keypress['w'] = keypress[' '] = 1;
    keypress['b'] = keypress['e'] = keypress['h'] = keypress['k'] = keypress['n'] = keypress['q'] = keypress['u'] = keypress['x'] = 2;
    keypress['c'] = keypress['f'] = keypress['i'] = keypress['l'] = keypress['o'] = keypress['r'] = keypress['v'] = keypress['y'] = 3;
    keypress['s'] = keypress['z'] = 4;

    ios::sync_with_stdio(false); //faster I/O
    string s; char c; int T, t, i, ans;

    getline(cin, s);
    T = atoi(s.c_str());
    for (t = 0; t < T; ++t){
        ans = 0;
        getline(cin, s);

        for (i = 0; i < s.size(); ++i){
            c = s[i];
            ans += keypress[c];
        }

        cout << "Case #" << t + 1 << ": " << ans << endl;
    }

    return 0;
}
