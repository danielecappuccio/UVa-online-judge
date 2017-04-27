 /**
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <cstdio>
#include <cstdlib>

long long swaps;

void merge(int* a, int left, int center, int right){

    int i=left, j=center+1, k=0;
    int* b = (int*)malloc((right-left+1)*sizeof(int));

    while (i <= center && j <= right){
        if (a[i] < a[j]) b[k++] = a[i++];
        else{
            b[k++] = a[j++];
            swaps += center+1-i;
        }
    }

    while (i <= center)
        b[k++] = a[i++];

    while (j <= right)
        b[k++] = a[j++];

    int h;
    for (h=0; h<right-left+1; ++h)
        a[left+h] = b[h];
    
    free(b);
    
}

void merge_sort(int* a, int left, int right){
    if (left >= right) return;
    int center = (left + right)/2;
    merge_sort(a, left, center);
    merge_sort(a, center+1, right);
    merge(a, left, center, right);  
}

int main(){
    int S;
    while (scanf("%d", &S) != EOF){
        swaps = 0;
        int* A = (int*)malloc(S * sizeof(int));
        for (int s=0; s<S; ++s) scanf("%d", &(A[s]));
        merge_sort(A, 0, S-1);
        printf("%lld\n", swaps);
    }
    return 0;
}