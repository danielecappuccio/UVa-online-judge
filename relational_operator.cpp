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
	
	int N, a, b;
	cin >> N;
	
	for (int i=0; i<N; ++i){
		cin >> a >> b;
		if (a < b) cout << "<" << endl;
		else if (a == b) cout << "=" << endl;
		else cout << ">" << endl;
	}
	
	return 0;
	
}
