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

    ios_base::sync_with_stdio(false); //faster I/O

    int N, count;
    string l;
    char one[] = {'o', 'n', 'e'};
  
    cin >> N;
  
    for(int i = 0; i < N; i++) {
        cin >> l;
        if(l.length() == 5) {
            cout << 3 << endl;
        }
        else {
            count = 0;
            for(int j = 0; j < 3; j++) {
                if(l[j] == one[j]) count++;
            }
            if(count < 2) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
