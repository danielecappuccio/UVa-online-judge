 /**
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <cstdio>
#include <cstdlib>

int selection_sort(int* a, int size){
	int i;
    int swaps = 0;
	if ((a == NULL) || (size < 2)) return 0;
	for (i=0; i<size-1; i++){
		/* swapping a[i] with the lowest value (on the right) */
		int j, i_min = i, temp;
		for (j=i+1; j<size; j++)
			if (a[j] < a[i_min]) i_min = j;

        for (int k=i_min; k>i; --k){
            temp = a[k];
            a[k] = a[k-1];
            a[k-1] = temp;
            swaps++;
        }	 
	}
	return swaps;
}

int main(){
    int N, n, swaps;
    while (scanf("%d", &N) != EOF){

        int* A = (int*)malloc(N * sizeof(int));
        for (n=0; n<N; ++n) scanf("%d", &(A[n]));

        swaps = selection_sort(A, N);
        printf("Minimum exchange operations : %d\n", swaps);
    }
    return 0;
}