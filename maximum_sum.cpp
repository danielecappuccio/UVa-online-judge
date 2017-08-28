/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <climits>

#define SIZE 101
#define DEBUG 0

using namespace std;

int input[SIZE][SIZE] = {0, };
int sum[SIZE][SIZE] = {0, };

int max(int a, int b){
    return (a > b) ? a : b;
}

void print_arr(int arr[SIZE][SIZE], int N) {
    int i, j;
    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= N; ++j)
            cout << arr[i][j];
        cout << endl;
    }
    cout << endl;
}

int solve(int N) {

    int i, j, x, y, s, maximum;

    for (i = 0; i <= N; ++i)
        for (j = 0; j <= N; ++j)
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + input[i][j] - sum[i - 1][j - 1];

    if (DEBUG) print_arr(sum, N);

    maximum = INT_MIN;
    for (x = 0; x <= N; ++x) {
        for (y = 0; y <= N; ++y) {
            for (i = 0; i <= x; ++i) {
                for (j = 0; j <= y; ++j) {
                    s = sum[x][y] - sum[i][y] - sum[x][j] + sum[i][j];
                    maximum = max(maximum, s);
                }
            }
        }
    }

    return maximum;
}

int main() {

    ios::sync_with_stdio(false); //faster I/O

    int N, num, i, j;
    cin >> N;
    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= N; ++j) {
            cin >> num;
            input[i][j] = num;
        }
    }
    cout << solve(N) << endl;
    
    return 0;
}