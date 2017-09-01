/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

#define DEBUG 1

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    unsigned long long int Z, I, M, L;
    int m, ord, t = 1;
    bool found;

    cin >> Z >> I >> M >> L;
    do {

        bool generated[M];
        int order[M]; ord = 0;

        for (m = 0; m < M; ++m){
            generated[M] = false;
            order[M] = -1;
        }

        generated[L] = true;
        order[L] = ord++;

        found = false;
        while (!found){
            L = (Z * L + I) % M;
            if (!generated[L]){
                generated[L] = true;
                order[L] = ord++;
                if (DEBUG) cout << "[DEBUG] L = " << L << endl;
            }
            else {
                found = true;
                if (DEBUG) cout << "[DEBUG] --> L = " << L << endl;
                cout << "Case " << t++ << ": " << ord - order[L] << endl;
            }
        }

        cin >> Z >> I >> M >> L;
    } while (Z || I || M || L);

    return 0;
}

