/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <algorithm>

#define MAX 10000

using namespace std;

int books[MAX];

int main(){

    ios::sync_with_stdio(false); //faster I/O

    int N, M, i, j, A, B;
    
    while (cin >> N){
        for (i = 0; i < N; ++i)
            cin >> books[i];
        
        sort(books, books + N);
        
        cin >> M;
        
        i = 0, j = N - 1;
        while (i < j){
            if (books[i] + books[j] < M)
                ++i;
            else if (books[i] + books[j] == M){
                A = i;
                B = j;
                ++i; --j;
            }
            else
                --j;
        }
        
        cout << "Peter should buy books whose prices are " << books[A] << " and " << books[B] << ".\n" << endl;
    }

    return 0;
}