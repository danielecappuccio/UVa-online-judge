#include <iostream>

using namespace std;

int sum_borders(int** matrix, int S){
    int res = 0;
    for (int r=0; r<S; ++r){
        for (int c=0; c<S; ++c){
            if (!r || !c || r==S-1 || c==S-1){
                res += matrix[r][c];
            }
        }
    }
    return res;
}

int main(){
    int ncase=1;
    while (1){
        int S;
        cin >> S;
        if (!S) break;
        int** matrix = (int**)malloc(S*sizeof(int*));
        for (int a=0; a<S; ++a) matrix[a] = (int*)malloc(S*sizeof(int));
        for (int r=0; r<S; ++r){
            for (int c=0; c<S; ++c){
                cin >> matrix[r][c];
            }
        }
        cout << "Case " << ncase << ":";
        for (int b=S; b>=1; b-=2){
            cout << " " << sum_borders(matrix, S);
            S -= 2;
            for (int k=0; k<S; ++k) matrix[k] = &(matrix[k+1][1]);          
        }
        cout << endl;
        ncase++;
    }
    return 0;
}