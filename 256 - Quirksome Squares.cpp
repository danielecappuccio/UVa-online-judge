/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false); //faster I/O 

    vector<int> quirksome_squares[4] = {
        {0, 1, 81},
        {0, 1, 2025, 3025, 9801},
        {0, 1, 88209, 494209, 998001},
        {0, 1, 4941729, 7441984, 24502500, 25502500, 52881984, 60481729, 99980001}};

    int d, i;

    while (cin >> d){
        i = d / 2 - 1;
        for (auto v : quirksome_squares[i])
            cout << setw(d) << setfill('0') << v << endl;
    }

    return 0;
}