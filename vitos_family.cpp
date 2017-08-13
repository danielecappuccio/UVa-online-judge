#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int T, t, N, n, houses[500], med, res;
    cin >> T;

    for (t=0; t<T; ++t){

        cin >> N;
        for (n=0; n<N; ++n)
            cin >> houses[n];

        sort(houses, houses + N);
        med = houses[N/2];

        res = 0;
        for (n=0; n<N; ++n)
            res += abs(med - houses[n]);

        cout << res << endl;
    }

    return 0;
}