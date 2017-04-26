 /**
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>

using namespace std;

int sum_odd_numbers(int start, int end){
    int r = 0;
    for (int i=start; i<=end; i+=2) r += i;
    return r;
}

int main(){
    int T, a, b, r;
    cin >> T;
    for (int t=0; t<T; ++t){
        cin >> a >> b;
        if (a%2 == 0) a++;
        if (b%2 == 0) b--;
        r = sum_odd_numbers(a,b);
        cout << "Case " << t+1 << ": " << r << endl;
    }
    return 0;
}