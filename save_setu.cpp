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

int main() {

    int T;
    int balance = 0, k;
    string str;
  
    cin >> T;
  
    for(int i = 1; i <= T; i++) {
        cin >> str;
        if(str[0] == 'd') {
            cin >> k;
            balance += k;
        }
	else{
		cout << balance << endl;
	}
    }
  
    return 0;
}
