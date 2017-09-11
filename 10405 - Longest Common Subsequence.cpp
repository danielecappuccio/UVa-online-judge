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

int A[1001][1001];

int main(){  
    
    ios::sync_with_stdio(false); //faster I/O

    int i, j, S, T;
    string s, t;
    
    while (getline(cin, s)){
        getline(cin, t);

        S = s.size();
        T = t.size();
        
        for (i = S; i >= 0; --i){
            for (j = T; j >= 0; --j){
                if(i == S || j == T){
                    A[i][j] = 0;
                    continue;
                }
                if(s[i] == t[j]) A[i][j] = 1 + A[i + 1][j + 1];
                else A[i][j] = max(A[i + 1][j], A[i][j + 1]);
            }
        }
        
        cout << A[0][0] << endl;
    }
    
    return 0;
}