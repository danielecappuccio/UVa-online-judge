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

    ios::sync_with_stdio(false);
    int i, j;

    char keyboard[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', 92,
                        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 39,
                        'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/',
                        '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='} ;

    string str;

    while (getline(cin, str)){      
        for (i = 0; i < str.size(); ++i){
            if (str[i] == ' ' || str[i] == '\n') cout << str[i];
            else {
                for (j = 2; j < 47; ++j){
                    if (tolower(str[i]) == keyboard[j]){
                        cout << keyboard[j - 2];
                        break;
                    }
                }
            }
        }

        cout << endl;
    }

    return 0;
}