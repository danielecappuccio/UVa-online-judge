#include <stdio.h>
#include <stdlib.h>

int main(){
	int cases, i;
	scanf("%d", &cases);
	/*printf("test cases: %d\n", cases);*/
	for (i=0; i<cases; i++){
		int n;
		scanf("%d", &n);
		/*printf("number read: %d\n", n);*/
		n *= 63;
		n += 7492;
		n *= 5;
		n -= 498;
		/* 2348 */
		n = n%100;
		if (n<0) n = -1*n;
		int unit = n%10;
		n -= unit;
		n = n/10;
		printf("%d\n", n);
	}
	return 0;
}
