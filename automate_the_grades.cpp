/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    int T, t, t1, t2, fin, attendance, total;
    char grade;
    cin >> T;
    
    int classTests[3];
    
    for (t = 0; t < T; ++t){

        cin >> t1 >> t2 >> fin >> attendance >> classTests[0] >> classTests[1] >> classTests[2];
        
        sort(classTests, classTests + 3);
        
        total = t1 + t2 + fin + attendance + (classTests[1] + classTests[2]) / 2;
        
        if (total >= 90)
            grade = 'A';
        else if (total >= 80)
            grade = 'B';
        else if (total >= 70)
            grade = 'C';
        else if (total >= 60)
            grade = 'D';
        else
            grade = 'F';
        
        cout << "Case " << t + 1 << ": " << grade << endl;
    }

    return 0;
}