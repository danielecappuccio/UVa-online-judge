/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int set, N, i, s, m, diff, res;
    set = 1;
    while (true){
        cin >> N;
        if (N == 0) break;

        s = 0;
        int* tmp = (int*)malloc(N * sizeof(int));
        for (i=0; i<N; ++i){
            cin >> tmp[i];
            s += tmp[i];
        }

        m = s/N;
        res = 0;
        for (i=0; i<N; ++i){
            diff = m - tmp[i];
            if (diff < 0) diff = -diff;
            res += diff;
        }

        cout << "Set #" << set << endl;
        cout << "The minimum number of moves is " << res/2 << "." << endl;
        cout << endl;
        ++set;

    }

    return 0;
}