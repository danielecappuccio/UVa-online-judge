#include <iostream>

using namespace std;

int insertion_sort (int arr[], int length){
    int j, temp, swaps = 0;
   
    for (int i = 0; i < length; i++){
        j = i;
   
        while (j > 0 && arr[j] < arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            --j;
            ++swaps;
        }
    }

    return swaps;
}

int main(){

    int T, t, N, n, swaps;
    cin >> T;

    for (t=0; t<T; ++t){
        cin >> N;
        int carriages[N];
        for (n=0; n<N; ++n)
            cin >> carriages[n];
        
        swaps = insertion_sort(carriages, N);
        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }

    return 0;

}