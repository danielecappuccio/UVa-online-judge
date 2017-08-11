/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>

using namespace std;

int main(){

    int N;
    while (true){
        cin >> N;
        if (N == 0) break;
        if (N <= 100) cout << "f91(" << N << ") = 91" << endl;
        else cout << "f91(" << N << ") = " << N - 10 << endl;
    }
    return 0;
}