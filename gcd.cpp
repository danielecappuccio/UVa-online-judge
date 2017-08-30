/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int gcd(int i, int j){
	if (i==1 || j==1) return 1;
	if (i%j == 0) return j;
	if (j%i == 0) return i;
	if (i > j) return gcd(i-j, j);
	return gcd(i, j-i);
}

int main(){
	int N;
	while (1){
		cin >> N;
		if (!N) break;
		int G = 0;
		for (int i=1; i<N; ++i){
			for (int j=i+1; j<=N; ++j){
				G += gcd(i,j);
			} 
		}
		cout << G << endl;
	}
	return 0;
}
