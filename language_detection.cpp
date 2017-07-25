/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    int count = 1;
    string s;
    map<string,string>::iterator lng;
    map<string, string> dict = {
        {"HELLO", "ENGLISH"},
        {"HOLA", "SPANISH"},
        {"HALLO", "GERMAN"},
        {"BONJOUR", "FRENCH"},
        {"CIAO", "ITALIAN"},
        {"ZDRAVSTVUJTE", "RUSSIAN"}
    };
  
    while(true) {
        cin >> s;
    
        if(s[0] == '#' && s.length() == 1) break;
            lng = dict.find(s);

        if(lng != dict.end())
            cout << "Case " << count << ": " << lng->second << endl;
        else 
            cout << "Case " << count << ": " << "UNKNOWN" << endl;

        count++;
    }

  return 0;
}