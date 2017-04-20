#include <cstdio>
#include <cstdlib>

#define MAX_TEST_CASE 76

using namespace std;

int main(){
    int n, R;
    long* A = (long*)malloc(MAX_TEST_CASE*sizeof(long));
    A[0] = 1; A[1] = 2; A[2] = 2;
    for (int i=3; i<MAX_TEST_CASE; ++i){
        A[i] = A[i-3] + A[i-2];
    }
    while (scanf("%d", &n) != EOF){
        printf("%ld\n", A[n-1]);
    }
    return 0;
}
