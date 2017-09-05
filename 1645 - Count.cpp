/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 
#define MOD 1000000007

using namespace std;

int main() {

    ios::sync_with_stdio(false); //faster I/O 

    int i, j;
	int harmonious[1024] = {};
	harmonious[1] = 1;

	for (i = 1; i < 1024; ++i) {
		for (j = 1; i * j < 1024; ++j) {
			harmonious[i * j + 1] = (harmonious[i * j + 1] + harmonious[i]) % MOD;
		}
	}

	int N, t = 1;
	while (cin >> N){
        cout << "Case " << t++ << ": " << harmonious[N] << endl;
	}
    
	return 0;
}