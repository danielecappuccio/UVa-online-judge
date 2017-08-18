/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int bit_count(int N){

    int count = 0;
    while (N > 0) {           // until all bits are zero
        if ((N & 1) == 1)     // check lower bit
            ++count;
        N >>= 1;          // shift bits, removing lower bit
    }

    return count;
}

int main(){

    ios::sync_with_stdio(false);
    int N;

    while (true){

        cin >> N;
        if (!N) break;
        string binary = bitset<32>(N).to_string(); //to binary
        binary.erase(0, binary.find_first_not_of('0'));

        cout << "The parity of " << binary << " is " << bit_count(N) << " (mod 2)." << endl;
    }

    return 0;
}