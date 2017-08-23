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
    int A, B;

    while (cin >> A >> B)
        cout << (A ^ B) << endl;
    
    return 0;
}