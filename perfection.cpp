#include <iostream>

using namespace std;

int main(){
    cout << "PERFECTION OUTPUT" << endl;
    int N;
    while (1){
        cin >> N;
        if (!N) break;
        int S = 0;
        for (int i=1; i<N; ++i){
            if (N%i == 0) S += i;
        }
        string s;
        if (S > N) s = "ABUNDANT";
        else if (S == N) s = "PERFECT";
        else s = "DEFICIENT";
        if (N<10) cout << "    " << N << "  " << s << endl;
        else if (N<100) cout << "   " << N << "  " << s << endl;
        else if (N<1000) cout << "  " << N << "  " << s << endl;
        else if (N<10000) cout << " " << N << "  " << s << endl;
        else cout << N << "  " << s << endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}