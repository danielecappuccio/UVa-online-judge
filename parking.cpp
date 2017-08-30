/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	for (int i=0; i<N; ++i){
			int M, sum = 0;
			int min = 100, max = 0;
			cin >> M;
			for (int j=0; j<M; ++j){
				int t;
				cin >> t;
				sum += t;
				if (t > max) max = t;
				if (t < min) min = t;
			}
			int opt_park = (int) sum/M;
			int r = 2*(opt_park - min) + 2*(max - opt_park);
			cout << r << endl;
	}
	return 0;
}
