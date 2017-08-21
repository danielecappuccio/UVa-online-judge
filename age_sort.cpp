/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void merge(int* a, int left, int center, int right){

    int i = left, j = center + 1, k = 0;
    int* b = (int*)malloc((right-left+1)*sizeof(int));

    while (i <= center && j <= right){
        if (a[i] < a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];           
    }

    while (i <= center)
        b[k++] = a[i++];

    while (j <= right)
        b[k++] = a[j++];

    int h;
    for (h = 0; h < right - left + 1; ++h)
        a[left + h] = b[h];
    
    free(b);
    
}

void merge_sort(int* a, int left, int right){
    
    if (left >= right) return;
    int center = (left + right)/2;

    merge_sort(a, left, center);
    merge_sort(a, center+1, right);
    merge(a, left, center, right);  
}

void print_array(int* a, int dim){
    int i;
    for (i = 0; i < dim; ++i){
        if (i != dim - 1) cout << a[i] << " ";
        else cout << a[i] << endl;
    }
}

int main(){

    ios::sync_with_stdio(false);

    int N, n;
    while (true){
        cin >> N;
        if (N == 0) break;

        int* array = (int*) malloc(N * sizeof(int));
        for (n = 0; n < N; ++n) cin >> array[n];

        merge_sort(array, 0, N - 1);
        print_array(array, N);
    }

    return 0;
}

