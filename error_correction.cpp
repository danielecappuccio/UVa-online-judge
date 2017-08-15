#include <iostream>
#include <cstdlib>

using namespace std;

void find_changing_bit(int** matrix, int N){
    int row, col, sum, changing_row, changing_col;
    for (row = 0; row < N; ++row){
        sum = 0;
        for (col = 0; col < N; ++col){
            sum += matrix[row][col];
        }
        if (sum % 2 != 0) changing_row = row;
    }

    for (col = 0; col < N; ++col){
        sum = 0;
        for (row = 0; row < N; ++row){
            sum += matrix[row][col];
        }
        if (sum % 2 != 0) changing_col = col;
    }

    cout << "Change bit (" << changing_row + 1 << "," << changing_col + 1 << ")" << endl;
}

int check_corrupted_rows(int** matrix, int N){
    int row, col, sum, result = 0;
    for (row = 0; row < N; ++row){
        sum = 0;
        for (col = 0; col < N; ++col){
            sum += matrix[row][col];
        }
        if (sum % 2 != 0) ++result;
    }

    return result;
}

int check_corrupted_columns(int** matrix, int N){
    int row, col, sum, result = 0;
    for (col = 0; col < N; ++col){
        sum = 0;
        for (row = 0; row < N; ++row){
            sum += matrix[row][col];
        }
        if (sum % 2 != 0) ++result;
    }

    return result;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N, row, col, corr_rows, corr_cols;

    while (true){
        cin >> N;
        if (N == 0) break;

        int** matrix = (int**)malloc(N * sizeof(int*));
        for (int m = 0; m < N; ++m)
            matrix[m] = (int*) malloc(N * sizeof(int));
        
        corr_rows = corr_cols = 0;
        for (row = 0; row < N; ++row){
            for (col = 0; col < N; ++col){
                cin >> matrix[row][col];
            }
        }

        corr_rows = check_corrupted_rows(matrix, N);
        corr_cols = check_corrupted_columns(matrix, N);
        if (corr_rows == 0 && corr_cols == 0) cout << "OK" << endl;
        else if (corr_rows == 1 && corr_cols == 1) find_changing_bit(matrix, N);
        else cout << "Corrupt" << endl;

    }

    return 0;
}