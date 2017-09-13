/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 

using namespace std;

bool check_increasing(int array[], int dim){
    
    int i;
    for (i = 0; i < dim - 1; ++i){
        if (array[i] < array[i + 1]) return false;
    }

    return true;
}

bool check_decreasing(int array[], int dim){
    
    int i;
    for (i = 0; i < dim - 1; ++i){
        if (array[i] > array[i + 1]) return false;
    }

    return true;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int T, t, i;
    cin >> T;

    cout << "Lumberjacks:" << endl;

    for (t = 0; t < T; ++t){

        int array[10];
        for (i = 0; i < 10; ++i)
            cin >> array[i];
        
        if (check_increasing(array, 10) || check_decreasing(array, 10)) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }

    return 0;
}