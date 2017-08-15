#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, N, n, a, b, high, low;

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> N;
        high = low = 0;

        cin >> a;
        for (n = 0; n < N - 1; ++n){
            cin >> b;
            if (a > b) ++low;
            if (a < b) ++high;
            a = b;
        }

        cout << "Case " << t + 1 << ": " << high << " " << low << endl;

    }
    
    return 0;
}