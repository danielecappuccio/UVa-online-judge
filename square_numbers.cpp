/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <tgmath.h>

using namespace std;

bool is_perfect_square(int n) {
    if (n < 0)
        return false;
    int root(round(sqrt(n)));
    return n == root * root;
}

int main(){
	int a, b;
	while (1){
		cin >> a >> b;
		if (!a && !b) break;
		if (a > b){
			int temp = b;
			b = a;
			a = temp;
		}
		int R = 0;
		for (int i=a; i<=b; ++i){
			if (is_perfect_square(i)) R++;
		}
		cout << R << endl;
	}
	return 0;
}
