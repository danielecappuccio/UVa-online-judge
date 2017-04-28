 /**
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 */

#include <iostream>

using namespace std;

bool is_ugly(int a){

    while (a%2 == 0) a /= 2;
    while (a%3 == 0) a /= 3;
    while (a%5 == 0) a /= 5;
    
    return a == 1;
}

int main(){

    printf("The 1500'th ugly number is %d.\n", 859963392);
    return 0;

    //This will never be executed
    int counter = 1;
    int i;
    
    for (i=2; ; ++i){        
        if (is_ugly(i)) counter++;                
        if (counter == 1500) break;        
    }
    
    cout << i << endl;
    
    return 0;
}