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

    int N, W, a, b;
    string s;
  
    cin >> N;
    for(int i = 0; i < N; i++) {
        getline(cin, s);
        cin >> W;
    
        int dif = -1, tmp;
        for(int i = 0; i < W; i++) {
            cin >> a >> b;
            if(dif == -2) continue;
            tmp = abs(a - b);
            if(dif == -1) dif = tmp;
            else if(tmp != dif) dif = -2;
        }
        if(dif == -2) cout << "no" << endl;
        else cout << "yes" << endl;
        if(i < N-1) cout << endl;
    }
  
    return 0;
}
