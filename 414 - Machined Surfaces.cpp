/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib>
#include <string>

#define DEBUG 0

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    int N, n, i, max, ans;
    string line;

    getline(cin, line);
    N = atoi(line.c_str());
    do {
        string buffer[N];
        int surface[N];
        ans = max = 0;

        for (n = 0; n < N; ++n){
            getline(cin, buffer[n]);
            if (DEBUG) cout << "[DEBUG] " << buffer[n] << endl;
        }

        for (n = 0; n < N; ++n)
            surface[n] = 0;

        for (n = 0; n < N; ++n){
            for (i = 0; i < 25; ++i){
                if (buffer[n][i] == 'X') 
                    surface[n] += 1;
            }
            if (DEBUG) cout << "[DEBUG] " << buffer[n] << " --- Surface: " << surface[n] << endl;
            max = (surface[n] > max) ? surface[n] : max;
        }

        if (DEBUG) cout << "[DEBUG] Max. surface: " << max << endl; 

        for (n = 0; n < N; ++n)
            ans += max - surface[n];

        cout << ans << endl;

        getline(cin, line);
        N = atoi(line.c_str());
    } while (N != 0);

    return 0;
}