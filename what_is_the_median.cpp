/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <cstdio>
#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;
    int i;
    while (scanf("%d", &i) != EOF){
        l.push_back(i);
        l.sort();
        list<int>::iterator it=l.begin();
        if (l.size()%2 != 0){
            int median_pos = (int) l.size()/2;
            for (int j=0; j<median_pos; j++) it++;
            cout << *it << endl;
        }
        else{
            int first_pos = (l.size()/2)-1;
            for (int k=0; k<first_pos; k++) it++;
            int first = *it;
            int second = *(++it);
            int median = (int)(first+second)/2;
            cout << median << endl;
        }
    }
    return 0;
}
