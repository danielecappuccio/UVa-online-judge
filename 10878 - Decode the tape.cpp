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
    string s; int pos, value;
    
    getline(cin, s);
    
    while (s[0] != '|')
        getline(cin, s);   
    
    while (s[0] == '|'){

        pos = 7;   
        value = 0;
        
        for (string::const_iterator c = s.begin() + 1; pos >= 0; ++c){
            if (*c == ' ' || *c == 'o'){
                if (*c == 'o')
                    value += (1 << pos);                  
                --pos;
            }
        }
        
        cout << static_cast<char>(value);
        getline(cin, s);
    }

    return 0;
}