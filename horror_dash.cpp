#include <iostream>

using namespace std;

int main(){

    int T, t, N, n, creature, max;
    cin >> T;

    for (t=0; t<T; ++t){
        cin >> N;
        max = 0;

        for (n=0; n<N; ++n){
            cin >> creature;
            max = (creature > max) ? creature : max;
        }
        
        cout << "Case " << t+1 << ": " << max << endl;
    }

    return 0;
}