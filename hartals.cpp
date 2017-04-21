#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int T, N, P, h;
    cin >> T;
    for (int t=0; t<T; ++t){
        cin >> N;
        int* days = (int*)calloc(N, sizeof(int));
        cin >> P;
        for (int p=0; p<P; ++p){
            cin >> h;
            for (int i=h-1; i<N; i+=h) days[i]++;
        }
        int hartals = 0;
        for (int j=0; j<N; ++j){
            if (days[j] && j%7 < 5) hartals++;
        }
        cout << hartals << endl;
    }
    return 0;
}
