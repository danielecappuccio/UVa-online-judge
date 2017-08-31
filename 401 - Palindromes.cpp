/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>
#include <algorithm>

#define DEBUG 0

using namespace std;

char reversed[128];

bool is_palindrome(string s, int size){
    for (int i = 0; i <= size / 2; ++i){
        if (s[i] != s[size - 1 - i]) return false;
    }
    return true;
}

bool is_mirrored(string s, int size){
    char c;
    for (int i = 0; i <= size / 2; ++i){
        c = s[size - 1 - i];
        if (s[i] != reversed[c]) return false;
    }
    return true;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    string s;
    int size;
    
    for (int i = 0; i < 128; ++i)
        reversed[i] = ' ';
    
    reversed['A'] = 'A';
    reversed['E'] = '3';
    reversed['H'] = 'H';
    reversed['I'] = 'I';
    reversed['J'] = 'L';
    reversed['L'] = 'J';
    reversed['M'] = 'M';
    reversed['O'] = 'O';
    reversed['S'] = '2';
    reversed['T'] = 'T';
    reversed['U'] = 'U';
    reversed['V'] = 'V';
    reversed['W'] = 'W';
    reversed['X'] = 'X';
    reversed['Y'] = 'Y';
    reversed['Z'] = '5';
    reversed['1'] = '1';
    reversed['2'] = 'S';
    reversed['3'] = 'E';
    reversed['5'] = 'Z';
    reversed['8'] = '8';

    while (cin >> s){
        size = s.size();
        if (DEBUG) cout << "[DEBUG] Size: " << size << endl;
        if (is_palindrome(s, size)){
            if (is_mirrored(s, size))
                cout << s << " -- is a mirrored palindrome." << endl;
            else 
                cout << s << " -- is a regular palindrome." << endl;
        }
        else {
            if (is_mirrored(s, size))
                cout << s << " -- is a mirrored string." << endl;
            else
                cout << s << " -- is not a palindrome." << endl;
        }
        
        cout << endl;
    }

    return 0;
}