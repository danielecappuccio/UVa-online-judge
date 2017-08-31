/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>

#define MAX 100
#define DEBUG 0

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O 
    
    string buffer[MAX];
    string s;
    int i = 0, j, c, max = 0;

    while (getline(cin, s)){
        buffer[i++] = s;
        if (DEBUG) cout << "[DEBUG] " << buffer[i - 1] << endl;
        max = (buffer[i - 1].size() > max) ? buffer[i -1].size() : max;
    }

    for (c = 0; c < max; ++c){
        for (j = 0; j < i; ++j){
            if (buffer[i - 1 - j].size() > c) cout << buffer[i - 1 - j][c];
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}