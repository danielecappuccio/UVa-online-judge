/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    long long int n;
    int count;
    
    while (cin >> n){
        if (n == 1){
            cout << "Stan wins." << endl;
            continue;
        }
        
        count = 0;
        
        while (n > 1){
            ++count;
            if (count % 2 == 1) n = (n + 8) / 9;
            else n = (n + 1) / 2;
        }
                
        if (count % 2 == 1) cout << "Stan wins." << endl;
        else cout << "Ollie wins." << endl;
    }
    
    return 0;
}