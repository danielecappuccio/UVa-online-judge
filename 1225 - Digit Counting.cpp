/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>

#define MAX 10000
#define DEBUG 0

using namespace std;

int digits[MAX][10];

void sum_digits(int i){
    string s = to_string(i);
    int size = s.size();
    char c;
    for (int j = 0; j < size; ++j){
        c = s[j];
        if (DEBUG) cout << i << " has " << c << " as a digit." << endl;
        ++(digits[i][c - '0']); 
    }
}

void print_result(int N){
    for (int i = 0; i < 9; ++i){
        cout << digits[N][i] << " ";
    }
    cout << digits[N][9] << endl;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O

    int T, t, N, d, i;

    //initializing 1
    for (d = 0; d < 10; ++d)
        digits[1][d] = 0;
    digits[1][1] = 1;

    if (DEBUG) print_result(1);

    //iterations
    for (i = 2; i < MAX; ++i){
        for (d = 0; d < 10; ++d){
            digits[i][d] = digits[i - 1][d];
        }
        sum_digits(i);
        if (DEBUG) print_result(i);
    }

    cin >> T;
    for (t = 0; t < T; ++t){
        cin >> N;
        print_result(N);
    }
    
    return 0;

}

