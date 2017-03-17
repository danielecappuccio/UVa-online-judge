#include <stdio.h>
#include <stdlib.h>

/*
1 1
*
3 5
*@*@*
**@**
*@*@*
1 8
@@****@*
5 5
****@
*@@*@
*@**@
@@@*@
@@**@
0 0 
*/

int _is_in_matrix(int i, int j, int rows, int cols){
	if (i<0 || j<0) return 0;
	if (i>=rows || j>=cols) return 0;
	return 1;
}

void _remove_adjacent(char** pt_matrix, int rows, int cols, int i, int j){
	char* matrix = *pt_matrix;
	matrix[i*cols+j] = '*';
	int r,c;
	for (r=i-1; r<=i+1; r++){
		for (c=j-1; c<=j+1; c++){
			if (_is_in_matrix(r, c, rows, cols) && matrix[r*cols+c] == '@'){
				
				_remove_adjacent(pt_matrix, rows, cols, r, c);
			}
		}
	}
}

int main(){
	while (1){
		int rows;
		int cols;
		scanf("%d", &rows);
		if (rows == 0) return 0;
		scanf("%d\n", &cols);
		char* matrix = (char*)malloc(rows*cols*sizeof(char));
		int i, j, res;
		res = 0;
		for (i=0; i<rows; i++){
			for (j=0; j<cols; j++){
				char e;
				scanf("%c", &e);
				matrix[i*cols+j] = e;
			}
			char end;
			scanf("%c", &end);
		}
		for (i=0; i<rows; i++){
			for (j=0; j<cols; j++){
				if (matrix[i*cols+j] == '@'){
					/*printf("Oil deposit acquired in position: %d %d\n", i, j);*/
					res++;
					_remove_adjacent(&matrix, rows, cols, i, j);
				}
			}	
		}
		printf("%d\n", res);
	}
}
