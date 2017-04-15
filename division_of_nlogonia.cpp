#include <iostream>

using namespace std;

int main() {
	
  int K, n, m, x, y;
  
  while(true) {
    cin >> K;
    if(!K) break;
    
    cin >> n >> m;
    for(int i = 0; i < K; i++) {
      cin >> x >> y;
      if(x == n || y == m) cout << "divisa" << endl;
      else if(x > n && y > m) cout << "NE" << endl;
      else if(x > n && y < m) cout << "SE" << endl;
      else if(x < n && y < m) cout << "SO" << endl;
      else if(x < n && y > m) cout << "NO" << endl;
    }
  }
  return 0;
}
