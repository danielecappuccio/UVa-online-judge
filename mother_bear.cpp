/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>
#define DEBUG 0
 
using namespace std;

bool is_palindrome(char string[], int idx){
    for (int i = 0; i < idx; ++i){
        if (string[i] != string[idx - i]) return false;
    }
    return true;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    string str; char c; int idx, size;

    getline(cin, str);
    do {
        char buffer[1024]; //buffer for string
        idx = 0;

        size = str.size();
        for (int i = 0; i < size; ++i){
            c = str[i];
            if (c >= 'a' && c <= 'z') buffer[idx++] = c;
            else if (c >= 'A' && c <= 'Z') buffer[idx++] = c + 'a' - 'A';
        }
        buffer[idx] = '\0';

        if (DEBUG) cout << "Number of valid characters: " << idx << endl;
        
        if (is_palindrome(buffer, idx - 1)) cout << "You won't be eaten!" << endl;
        else cout << "Uh oh.." << endl;

        getline(cin, str);

    } while ((str.compare("DONE")) != 0);

    return 0;
}