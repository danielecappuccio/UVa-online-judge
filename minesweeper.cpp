 /**
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>

int adjacent_mines(char** matrix, int r, int c, int R, int C){
    int r_min = r-1;
    if (r_min < 0) ++r_min;
    int c_min = c-1;
    if (c_min < 0) ++c_min;
    int r_max = r+1;
    if (r_max == R) --r_max;
    int c_max = c+1;
    if (c_max == C) --c_max;
    int mines = 0;
    for (int i=r_min; i<=r_max; ++i){
        for (int j=c_min; j<=c_max; ++j){
            if (matrix[i][j] == '*') ++mines;
        }
    }
    return mines;
}


int main(){
    int R, C, r, c, adjacent, testCase = 1;
    while(1){
        std::cin >> R >> C;
        if (!R && !C) break;

        if (testCase > 1) printf("\n");
        char** matrix = (char**)malloc(R * sizeof(char*));
        for (r=0; r<R; ++r) matrix[r] = (char*)malloc(C * sizeof(char));

        for (r=0; r<R; ++r){
            for (c=0; c<C; ++c){
                std::cin >> matrix[r][c];
            }
        }

        printf("Field #%d:\n", testCase);
        for (r=0; r<R; ++r){
            for (c=0; c<C; ++c){
                if (matrix[r][c] == '*') printf("*");
                else{
                    adjacent = adjacent_mines(matrix, r, c, R, C);
                    printf("%d", adjacent);
                }
            }
            printf("\n");
        }
        
        for (r=0; r<R; ++r) free(matrix[r]);
        free(matrix);

        testCase++;
    }
    return 0;
}