/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 
#include <queue> 

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N, tmp;

    while (true){
        cin >> N;
        if (N == 0) break;

        priority_queue <int, vector<int>, greater<int>> q;
        for (int n = 0; n < N; ++n){
            cin >> tmp;
            q.push(tmp);
        }

        int total = 0, cost = 0;
		while (q.size() > 1) {
			total = q.top();
			q.pop();
			total += q.top();
			q.pop();
			cost += total;
			q.push(total);
        } 
        
        cout << cost << endl;
    }

    return 0;
}