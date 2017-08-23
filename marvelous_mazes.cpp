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

void process_char(int times, char c){
    if (c == '!'){
        cout << endl;
        return;
    }
    for (int i = 0; i < times; ++i){   
        if (c == 'b') cout << " ";
        else cout << c;
    }
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    string str;

    while (getline(cin, str)){
        if (str.empty()) cout << endl;
        else {
            int i, digits = 0;
            for (i = 0; i < str.size(); ++i){
                if (str[i] >= '0' && str[i] <= '9') digits += str[i] - '0';
                else {
                    process_char(digits, str[i]);
                    digits = 0;
                }
            }

            cout << endl;
        }   
    }

    return 0;
}