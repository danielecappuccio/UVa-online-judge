#include <iostream>

using namespace std;

int main(){	
	int N, iteration = 1;
	while (1){
		cin >> N;
		if (!N) break;
		int zeros = 0, others = 0, k;
		for (int i=0; i<N; i++){
			cin >> k;
			if (k) others++;
			else zeros++;
		}
		int r = others - zeros;
		cout << "Case " << iteration << ": " << r << endl;		
		iteration++;
	}
	return 0;	
}
