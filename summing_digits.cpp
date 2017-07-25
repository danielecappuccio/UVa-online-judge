/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>
#include <string>

using namespace std;

string sum(string str) {
    string s = "";
    int tmp = 0;
    for(int i = 0; i < str.length(); i++) {
        tmp += str[i] - '0';
    }
    return to_string(tmp);
}

int main() {
    
    string s;
  
    while(true) {
        cin >> s;
        if(s.length() == 1 && s[0] == '0') break;

        while(s.length() > 1) {
            s = sum(s);
        }
        
        cout << s << endl;
    } 

  return 0;
}