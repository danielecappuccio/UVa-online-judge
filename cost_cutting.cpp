/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){	
	int N;
	cin >> N;
	vector<int> V(3);
	for (int i=0; i<N; ++i){
		int a, b, c;
		cin >> a >> b >> c;
		V[0] = a; V[1] = b; V[2] = c;
		sort(V.begin(), V.end());
		cout << "Case " << i+1 << ": " << V[1] << endl;
	}	
	return 0;
}
