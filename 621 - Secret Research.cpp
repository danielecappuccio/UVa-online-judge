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

    string s;
    int T, t, size;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> s;
        size = s.size();
        if (!s.compare("1") || !s.compare("4") || !s.compare("78")) cout << "+" << endl;
        else if (s[size - 1] == '5' && s[size - 2] == '3') cout << "-" << endl;
        else if (s[0] == '9' && s[size - 1] == '4') cout << "*" << endl;
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0') cout << "?" << endl;
    }

    return 0;
}