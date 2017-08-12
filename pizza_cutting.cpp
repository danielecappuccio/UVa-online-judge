#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    long long int* A = (long long int*)malloc(210000001 * sizeof(long long int));
    A[0] = 1;

    int i, N;
    for (i=1; i<210000001; ++i)
        A[i] = i + A[i-1];
    
    while (true){
       cin >> N;
       if (N < 0) break;
       cout << A[N] << endl; 
    }

    free(A);

    return 0;
}