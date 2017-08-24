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
 
bool _is_in_matrix(int i, int j, int rows, int cols){
    if (i < 0 || j < 0) return false;
    if (i >= rows || j >= cols) return false;
    return true;
}
 
void _remove_adjacent(char** pt_matrix, int rows, int cols, int i, int j){
    char* matrix = *pt_matrix;
    matrix[i*cols+j] = '0';
    int r,c;
    for (r = i - 1; r <= i + 1; ++r){
        for (c = j - 1; c <= j + 1; ++c){
            if (_is_in_matrix(r, c, rows, cols) && matrix[r*cols+c] == '1'){                
                _remove_adjacent(pt_matrix, rows, cols, r, c);
            }
        }
    }
}
 
int main(){

    ios::sync_with_stdio(false); //faster I/O
    int rows, cols, test = 1;
    char c;
    
    while (cin >> rows){
        cols = rows;
        char* matrix = (char*)malloc(rows*cols*sizeof(char));
        int i, j, res;
        res = 0;
        for (i = 0; i < rows; ++i){
            for (j = 0; j < cols; ++j){
                cin >> c;
                matrix[i*cols+j] = c;
            }
        }
        for (i = 0; i < rows; ++i){
            for (j = 0; j < cols; ++j){
                if (matrix[i*cols+j] == '1'){
                    res++;
                    _remove_adjacent(&matrix, rows, cols, i, j);
                }
            }	
        }
        cout << "Image number " << test << " contains " << res << " war eagles." << endl;
        ++test; 
    }

    return 0;
}