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

    int soundex[128];
    for (int i = 0; i < 128; ++i) soundex[i] = 0;
    //Soundex 1
    soundex['B'] = 1; soundex['F'] = 1; soundex['P'] = 1; soundex['V'] = 1;
    //Soundex 2
    soundex['C'] = 2; soundex['G'] = 2; soundex['J'] = 2; soundex['K'] = 2; soundex['Q'] = 2;
        soundex['S'] = 2; soundex['X'] = 2; soundex['Z'] = 2;
    //Soundex 3
    soundex['D'] = 3; soundex['T'] = 3;
    //Soundex 4
    soundex['L'] = 4;
    //Soundex 5
    soundex['M'] = 5; soundex['N'] = 5;
    //Soundex 6
    soundex['R'] = 6;

    ios::sync_with_stdio(false); //faster I/O
    string str; int last; char c;

    while (getline(cin, str)){

        last = 0;

        int j;
        for (j = 0; j < str.size(); ++j){
            c = str[j];
            if (soundex[c] != 0 && soundex[c] != last){
                cout << soundex[c];
                last = soundex[c];
            }
            else if (soundex[c] == 0) last = 0;
        }

        cout << endl;
    }

    return 0;
}