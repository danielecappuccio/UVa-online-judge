
#include <iostream>
#include <string>

using namespace std;

int main() {
	
  ios_base::sync_with_stdio(false); // faster I/O
  
  int count = 1;
  string line;
  
  while(true) {	
	  cin >> line;
      if(line[0] == '*' && line.length() == 1) break;
      if(line[0] == 'H') cout << "Case " << count << ": Hajj-e-Akbar" << endl;
      else cout << "Case " << count << ": Hajj-e-Asghar" << endl;
      count++;
  }
  
  return 0;
}
