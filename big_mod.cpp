#include <cstdio>

int pow(int B, int P, int M){
	B = B % M;
	int res = 1;
	
	while (P){

		if (P & 1)
			res = (res * B) % M;
		
		B = (B * B) % M;
		P >>= 1;
	}

	return res;
}

int main(){
    int B, P, M, i, res;
    while (scanf("%d %d %d", &B, &P, &M) == 3)
        printf("%d\n", pow(B, P, M));

    return 0;
}