#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, amplitude, frequency, f, a, b, i;

    cin >> T;
    for (t=0; t<T; ++t){
        cin >> amplitude;
        cin >> frequency;

        for (f=0; f<frequency; ++f){
            for (a=1; a<amplitude; ++a){
                for (i=0; i<a; ++i){
                    cout << a;
                }
                cout << endl;
            }
            for (i=0; i<amplitude; ++i)
                cout << amplitude;
            cout << endl;
            for (a = amplitude - 1; a > 0; --a){
                for (i=0; i<a; ++i){
                    cout << a;
                }
                cout << endl;
            }
            if (! (t == T - 1 && f == frequency - 1)) cout << endl;
        }
    }

    return 0;
}