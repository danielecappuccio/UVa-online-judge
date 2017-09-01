/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib>

#define DEBUG 0

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O

    long long int Z, I, M, L;
    int m, ord, t = 1;
    bool found;

    cin >> Z >> I >> M >> L;
    do {

        bool* generated = (bool*)malloc(M * sizeof(bool));
        int* order = (int*)malloc(M * sizeof(int)); 
        ord = 0;

        for (m = 0; m < M; ++m){
            generated[m] = false;
            order[m] = -1;
        }

        generated[L] = true;
        order[L] = ord++;

        if (DEBUG) cout << "[DEBUG] L = " << L << " --- order: " << ord << endl;

        found = false;
        while (!found){
            L = (Z * L + I) % M;
            if (!generated[L]){
                generated[L] = true;
                order[L] = ord++;
                if (DEBUG) cout << "[DEBUG] L = " << L << " --- order: " << ord << endl;
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

